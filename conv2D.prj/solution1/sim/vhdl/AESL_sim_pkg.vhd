-- ==============================================================
-- File generated on Thu Dec 19 01:58:34 +0700 2024
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================

-- synthesis translate_off
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.numeric_std.all;
use std.textio.all;

--library work;
--use work.AESL_components.all;

package AESL_sim_components is

-- simulation routines
procedure esl_read_token (file textfile: TEXT; 
                          textline: inout LINE; 
                          token: out STRING;
                          token_len: out INTEGER);
procedure esl_read_token (file textfile: TEXT; 
                          textline: inout LINE; 
                          token: out STRING);
procedure esl_assign_lv (signal LHS : out STD_LOGIC_VECTOR;
                         variable RHS : in STRING);
procedure esl_assign_l (signal LHS : out STD_LOGIC;
                        variable RHS : in STRING);
procedure esl_compare_l (signal LHS: in STD_LOGIC;
                         variable RHS: in STRING;
                         variable dontcare: in BOOLEAN;
                         variable isok: out BOOLEAN);
procedure esl_compare_lv (signal LHS: in STD_LOGIC_VECTOR;
                          variable RHS: in STRING;
                          variable dontcare: in BOOLEAN;
                          variable isok: out BOOLEAN);
function esl_conv_string (lv : STD_LOGIC_VECTOR) return STRING;
function esl_conv_string_hex (lv : STD_LOGIC_VECTOR) return STRING;
function esl_conv_lv (str : string; base : integer; len : integer) return STD_LOGIC_VECTOR;

end package;

package body AESL_sim_components is
--simulation routines  
  procedure esl_read_token (file textfile: TEXT; 
                            textline: inout LINE; 
                            token: out STRING;
                            token_len: out INTEGER) is
    variable whitespace : CHARACTER;
    variable i : INTEGER;
    variable ok: BOOLEAN;
    variable buff: STRING(1 to token'length);
  begin
    ok := false;
    i := 1;
    loop_main: while not endfile(textfile) loop
        if textline = null or textline'length = 0 then
            readline(textfile, textline);
        end if;
        loop_remove_whitespace: while textline'length > 0 loop
            if textline(textline'left) = ' ' or
               textline(textline'left) = HT or
               textline(textline'left) = CR or
               textline(textline'left) = LF then
                read(textline, whitespace);
            else 
                exit loop_remove_whitespace;
            end if;
        end loop;
        loop_aesl_read_token: while textline'length > 0 and i <= buff'length loop
            if textline(textline'left) = ' ' or
               textline(textline'left) = HT or
               textline(textline'left) = CR or
               textline(textline'left) = LF then
                exit loop_aesl_read_token;
            else 
                read(textline, buff(i));
                i := i + 1;
            end if;
            ok := true;
        end loop;
        if ok = true then
            exit loop_main;
        end if;
    end loop;
    buff(i) := ' ';
    token := buff;
    token_len:= i-1;
  end procedure esl_read_token;

  procedure esl_read_token (file textfile: TEXT; 
                            textline: inout LINE; 
                            token: out STRING) is
    variable i : INTEGER;
  begin
      esl_read_token (textfile, textline, token, i);
  end procedure esl_read_token;

  procedure esl_assign_lv (signal LHS : out STD_LOGIC_VECTOR;
                           variable RHS : in STRING) is 
    variable i : INTEGER;
    variable bitwidth : INTEGER;
  begin
    bitwidth := LHS'length;
    for i in 1 to bitwidth loop
        if RHS(i) = '1' then
            LHS(bitwidth - i) <= '1';
        elsif RHS(i) = '0' then
            LHS(bitwidth - i) <= '0';
        else
            LHS(bitwidth - i) <= 'X';
        end if;
    end loop;
  end procedure;

  procedure esl_assign_l (signal LHS : out STD_LOGIC;
                          variable RHS : in STRING) is 
  begin
    if RHS(1) = '1' then
        LHS <= '1';
    elsif RHS(1) = '0' then
        LHS <= '0';
    else
        LHS <= 'X';
    end if;
  end procedure;

  procedure esl_compare_l (signal LHS: in STD_LOGIC;
                           variable RHS: in STRING;
                           variable dontcare: in BOOLEAN;
                           variable isok: out BOOLEAN) is
  begin
    if dontcare then 
        isok := true;
    elsif RHS(1) = '1' then
        if LHS = '1' then
            isok := true;
        else
            isok := false;
        end if;
    elsif RHS(1) = '0' then
        if LHS = '0' then
            isok := true;
        else 
            isok := false;
        end if;
    else
        isok := true;
    end if;
  end procedure;

  procedure esl_compare_lv (signal LHS: in STD_LOGIC_VECTOR;
                            variable RHS: in STRING;
                            variable dontcare: in BOOLEAN;
                            variable isok: out BOOLEAN) is
    variable i : INTEGER;
    variable bitwidth : INTEGER;
  begin
    bitwidth := LHS'length;
    if dontcare then 
        isok := true;
    else
        isok := true;
        loop_compare: for i in 1 to bitwidth loop
            if RHS(i) = '1' then
                if LHS(bitwidth - i) /= '1' then
                    isok := false;
                    exit loop_compare;
                end if;
            elsif RHS(i) = '0' then
                if LHS(bitwidth - i) /= '0' then
                    isok := false;
                    exit loop_compare;
                end if;
            end if;
        end loop;
    end if;
  end procedure;

  function esl_conv_string (lv : STD_LOGIC_VECTOR) return STRING is
    variable ret : STRING (1 to lv'length);
    variable i: INTEGER;
  begin
    for i in 1 to lv'length loop
        if lv(lv'length - i) = '1' then
            ret(i) := '1';
        elsif lv(lv'length - i) = '0' then
            ret(i) := '0';
        else
            ret(i) := 'X';
        end if;
    end loop;
    return ret;
  end function;

  function esl_conv_string_hex (lv : STD_LOGIC_VECTOR) return STRING is
    constant LEN : integer := (lv'length + 3)/4;
    variable ret : STRING (1 to LEN);
    variable i, tmp: INTEGER;
    variable normal_lv : STD_LOGIC_VECTOR(LEN * 4 - 1 downto 0);
    variable tmp_lv : STD_LOGIC_VECTOR(3 downto 0);
  begin
    normal_lv := (others => '0');
    normal_lv(lv'length - 1 downto 0) := lv;
    for i in 0 to LEN - 1 loop
        tmp_lv := normal_lv(LEN * 4 - 1 - i * 4 downto LEN * 4 - 4 - i * 4);
        case tmp_lv is
        when "0000" => ret(i + 1) := '0';
        when "0001" => ret(i + 1) := '1';
        when "0010" => ret(i + 1) := '2';
        when "0011" => ret(i + 1) := '3';
        when "0100" => ret(i + 1) := '4';
        when "0101" => ret(i + 1) := '5';
        when "0110" => ret(i + 1) := '6';
        when "0111" => ret(i + 1) := '7';
        when "1000" => ret(i + 1) := '8';
        when "1001" => ret(i + 1) := '9';
        when "1010" => ret(i + 1) := 'a';
        when "1011" => ret(i + 1) := 'b';
        when "1100" => ret(i + 1) := 'c';
        when "1101" => ret(i + 1) := 'd';
        when "1110" => ret(i + 1) := 'e';
        when "1111" => ret(i + 1) := 'f';
        when others => ret(i + 1) := '0';
        end case;
    end loop;
    return ret;
  end function;

  function esl_conv_lv (str : STRING; base : integer; len : integer) return STD_LOGIC_VECTOR is
    variable ret : STD_LOGIC_VECTOR(len - 1 downto 0);
    variable val : integer := 0;
    variable pos : boolean := true;
    variable i : integer;
  begin
    loop_main: for i in 1 to str'length loop
        if str(i) = ' ' or str(i) = HT or str(i) = CR or str(i) = LF then
            exit loop_main;
        elsif str(i) = '-' then
            pos := false;
        else
            case base is
            when 10 =>
                if '0' <= str(i) and str(i) <= '9' then
                    val := val*10 + character'pos(str(i)) - character'pos('0');
                else
                    val := val*10;
                end if;
            when others =>
                val := 0;
            end case;
        end if;
    end loop;

    if pos = false then
        val := val * (-1);
    end if;

    ret := conv_std_logic_vector(val, len);
    return ret;
  end function;

end package body;
-- synthesis translate_on




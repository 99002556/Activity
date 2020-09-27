/** 
* @file calculator_operations.h
* Calculator application with 6 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int convertbinarytodecimal(long long n);
long long convertdecimaltobinary(int n);
long long convertOctalToDecimal(int octalNumber);
int convertDecimalToOctal(int decimalNumber);
int decimal_to_hexadecimal(int x);
long long int hexa_binary(char hex[]);
long long int binary_oct(long long binary);
int convertbitooctal(long long bin);
long long int hexa_oct(char hex[]);
long long convertocttobi(int oct);
int string_length(char s[]);
int binary2decimal(char n[]);
void printHexDigit(int d);
void hextobin(char b[]);  



#endif  /* #define __CALCULATOR_OPERATIONS_H__ */

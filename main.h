#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct controller - struct containing flags to "turn on"
 * when a controller specifier is passed to _printf()
 * @plus: controller for the '+' character
 * @space:controller for the ' ' character
 * @hash: controller for the '#' character
 */
typedef struct cont
{
	int plus;
	int space;
	int hash;
} counter;

/**
 * struct desider - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @p: pointer to the correct printing function
 */
typedef struct decider
{
	char c;
	int (*p)(va_list tot, counter *p);
} dec;

/* print_nums */
int print_int(va_list l, counter  *p);
void print_number(int n);
int print_unsigned(va_list l, counter *p);
int count_digit(int i);

/* print_bases */
int print_hex(va_list l, counter *p);
int print_hex_big(va_list l, counter *p);
int print_binary(va_list l, counter *p);
int print_octal(va_list l, counter *p);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* get_print */
int (*get_print(char s))(va_list, counter *);

/* _printf */
int _printf(const char *format, ...);

/* get_flag */
int get_flag(char s, counter *p);

/* print_alpha */
int print_string(va_list l, counter *p);
int print_char(va_list l, counter *p);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l, counter *p);
int print_rev(va_list l, counter *p);
int print_bigS(va_list l, counter *p);

/* print_address */
int print_address(va_list l, counter *p);

/* print_percent */
int print_percent(va_list l, counter *p);

#endif

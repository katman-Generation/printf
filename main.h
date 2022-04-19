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


int _printf(const char *format, ...);

#endif

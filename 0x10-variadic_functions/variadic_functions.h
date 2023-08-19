#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - Struct type
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct type
{
    char *op;
    void (*f)(va_list ptr);
} s_type;

void ps(va_list ptr);
void pc(va_list ptr);
void pi(va_list ptr);
void pf(va_list ptr);

#endif /* ifndef */

#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
  * struct ops - checks operator
  * @op: operator
  * @f: sunction
  */

typedef struct ops
{
    char *op;
    void (*f)();
} op_t;
#endif

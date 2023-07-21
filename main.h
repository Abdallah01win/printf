#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"
#define PARAMS_INT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/* _put.c module */
int _puts(char *str);
int _putchar(int c);

/* print task 0 modules */
int print_char(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);

/* print task 1 modules */
int print_int(va_list ap, params_t *params);

#endif

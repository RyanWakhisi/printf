#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdargs.h>
#include <string.h>

/* printf prototype */

int _printf(const char *format, ...);

/*Printf functions */

int print_char(char c);
int print_string(char *str);
int handle_s(va_list args_list);
int handle_c(va_list args_list);
#endif



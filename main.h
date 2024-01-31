#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _print_str(va_list arguments);
int _print_char(va_list arguments);



#endif

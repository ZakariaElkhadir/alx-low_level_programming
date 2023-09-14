#include "variadic_functions.h"
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list args;

	if (!n)
		return (0);
	va_start(args, n);
	while (i--)
		b += va_arg(args, int);
	va_end(args);
	retun(b)
}

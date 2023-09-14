#include "variadic_functions.h"
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...){
  va_list args;

  va_start (args, num);
  if(n == 0)
    return 0;
  va_end(args);
}

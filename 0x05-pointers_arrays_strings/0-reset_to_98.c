#include <stdio.h>

void reset_to_98(int *n) {
  *n = 98;
}

int main() {
  int n = 100;

  reset_to_98(&n);

  printf("The value of n is now %d\n", n);

  return 0;
}

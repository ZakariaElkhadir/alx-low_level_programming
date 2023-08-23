#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src) {
  int dest_len = strlen(dest);
  int src_len = strlen(src);

  if (dest_len + src_len > 100) {
    printf("The destination string is not large enough.\n");
    return NULL;
  }

  strcat(dest, src);
  return dest;
}

int main() {
  char dest[100];
  char src[] = "Hello, world!";

  _strcat(dest, src);
  printf("%s\n", dest);

  return 0;
}

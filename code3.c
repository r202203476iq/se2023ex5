#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "hello";

  printf("String: %s\n", str);

  size_t length = strlen(str);
  printf("Length: %zu\n", length);

  return 0;
}

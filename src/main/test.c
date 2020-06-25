#include "mergesort.h"
#include <stdio.h>

#define ARRAYPRINT(a) do {                            \
  printf("{ ");                                       \
  for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {  \
    if (i > 0) printf(", ");                          \
    printf("%d", a[i]);                               \
  }                                                   \
  printf(" }");                                       \
} while (0)

void test1() {
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  printf("test1: ");
  ARRAYPRINT(arr);
  mergesort(arr);
  printf("\n       ");
  ARRAYPRINT(arr);
  printf("\n\n");
}

int main(int argc, const char **argv) {
  test1();
}

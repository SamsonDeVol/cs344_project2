// Samson DeVol, CS344 Project 2, 1/13/2022
#include <unistd.h>
#include <stdio.h>

int main() {
  int x = 12;
  float y = 3.14;
  char s[] = "Hello, world!";

  printf("x is %d, y is %f\n", x, y);
  printf("%s\n", s);
  for (int i = 0; i < 5; ++i)
  {
    printf("%d x 5 = %d\n", i, i * 5);
  }
}
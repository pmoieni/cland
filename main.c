#include <stdio.h>

int main() {
  int i = 0, sum = 0, x;
  do {
    printf("enter a number:\n");
    scanf("%d", &x);
    i++;
    sum += x;
  } while (i < 10);

  printf("avg is: %f", ((float)sum / i));
  return 0;
}

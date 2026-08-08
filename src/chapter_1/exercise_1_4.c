#include <stdio.h>

int main(void) {
  printf("Celsius Fahrenheit\n");
  printf("------- ----------\n");

  float lower = 0;
  float upper = 300;
  float step = 20;
  float celsius = lower;

  while (celsius <= upper) {
    float fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%7.1f %10.0f\n", celsius, fahr);
    celsius += step;
  }
}

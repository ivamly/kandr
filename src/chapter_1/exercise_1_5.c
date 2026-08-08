#include <stdio.h>

int main(void) {
  float lower = 0;
  float upper = 300;
  float step = 20;

  printf("Celsius Fahrenheit\n");
  printf("------- ----------\n");

  for (float fahr = upper; fahr >= lower; fahr -= step) {
    float celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%7.1f %10.0f\n", celsius, fahr);
  }

  printf("\n");

  printf("Fahrenheit Celsius\n");
  printf("---------- -------\n");

  for (float celsius = upper; celsius >= lower; celsius -= step) {
    float fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%10.0f %7.1f\n", fahr, celsius);
  }
}

#include <stdio.h>

float fahr_to_celsius(float fahr);

float celsius_to_fahr(float celsius);

int main(void) {
  float lower = 0;
  float upper = 300;
  float step = 20;

  printf("Celsius Fahrenheit\n");
  printf("------- ----------\n");

  for (float fahr = upper; fahr >= lower; fahr -= step) {
    printf("%7.1f %10.0f\n", fahr_to_celsius(fahr), fahr);
  }

  printf("\n");

  printf("Fahrenheit Celsius\n");
  printf("---------- -------\n");

  for (float celsius = upper; celsius >= lower; celsius -= step) {
    printf("%10.0f %7.1f\n", celsius_to_fahr(celsius), celsius);
  }
}

float fahr_to_celsius(float fahr) { return (5.0 / 9.0) * (fahr - 32); }

float celsius_to_fahr(float celsius) { return (9.0 / 5.0) * celsius + 32.0; }

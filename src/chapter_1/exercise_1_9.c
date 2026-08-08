#include <stdio.h>

int main(void) {
  int prev_was_space = 0;

  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ' && !prev_was_space) {
      putchar(c);
      prev_was_space = 1;
    } else if (c != ' ') {
      putchar(c);
      prev_was_space = 0;
    }
  }
}

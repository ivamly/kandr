#include <stdio.h>

int main(void) {
  int in_word = 0;

  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (in_word) {
        in_word = 0;
        putchar('\n');
      }
    } else {
      if (in_word == 0) {
        in_word = 1;
      }
      putchar(c);
    }
  }
}

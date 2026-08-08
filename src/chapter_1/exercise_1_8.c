#include <stdio.h>

int main(void) {
  long blank_count = 0;
  long tab_count = 0;
  long newline_count = 0;

  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      blank_count++;
    } else if (c == '\t') {
      tab_count++;
    } else if (c == '\n') {
      newline_count++;
    }
  }

  printf("Blanks: %ld\n", blank_count);
  printf("Tabs: %ld\n", tab_count);
  printf("Newlines: %ld\n", newline_count);
}

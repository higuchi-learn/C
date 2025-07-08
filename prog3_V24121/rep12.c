#include <stdio.h>
int main() {
  int c;
  char *name = "”óŒû—z‹P";
  char *num = "V24121";

  printf("–½—ß(B/N/R/Q)?\n");

  while ((c = getchar()) != EOF){
    switch (c) {
      case'B':
        printf("%s\n", num);
        break;
      case'N':
        printf("%s\n", name);
        break;
      case'R':
        printf("%s %s\n", num, name);
        break;
      case'Q':
        return 0;
    }
  }
  return 0;
}

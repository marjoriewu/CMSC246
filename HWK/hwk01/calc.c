/* calc.c
 *
 * Name: Marjorie Wu
 * Desc:
 */

#include <stdio.h>

int main(){
  char x;
  int a, b, c = 0;
  while (1) {
    printf("Enter an operation: ");
    scanf(" %c", &x);
    if (x == '0'){
      break;
    }
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    if (x == '+'){
      c = a + b;
      printf("%d + %d = %d\n", a, b, c);
    } else if (x == '-'){
      c = a - b;
      printf("%d - %d = %d\n", a, b, c);
    } else if (x == '*'){
      c = a * b;
      printf("%d * %d = %d\n", a, b, c);
    } else if (x == '/'){
      if (b == 0) {
        printf("Invalid input (denominator can't be 0!)\n");
        continue;
      }
      c = a / b;
      printf("%d / %d = %d\n", a, b, c);
    } else {
      printf("Invalid input of Operation!\n");
    }
  }
  printf("Good-bye!\n");
  return 0;
}

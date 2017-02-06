/* cat.c
 *
 * Name: Marjorie Wu
 * Desc: a program reimplement the command-line tool cat
 */

#include <stdio.h>

int main(){
  char c;
  while ((c = getchar()) != EOF){
    putchar(c);
    }
  return 0;
}

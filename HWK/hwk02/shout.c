/* shout.c
 *
 * Name: Marjorie Wu
 * Desc: a program that outputs the most recent userinput in uppercase
 */

#include <stdio.h>
#include <ctype.h>   // for isalpha

int main(){
  char c;

  while ((c = getchar()) != EOF){
    if(isalpha(c)){
      c = c -'a' +'A'; // find this explanation on P.135 King
    }
    putchar(c);
    }
  return 0;
}

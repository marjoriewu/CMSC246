/* scream.c
 *
 * Name: Marjorie Wu
 * Desc: a program that does the same job as shout.c but
 * uses bit-flipping operations
 */

#include <stdio.h>
#include <ctype.h>   // for isalpha

int main(){
  char c;
  int helper = 32;
  while((c = getchar()) != EOF){
    if(isalpha(c)){
      c = c ^ helper;
      /* according to ASCII chart, every lower case
       * and its corresponding upper case is 32 bit
       * in difference. (more explanation covered in
       * 20.1 King )
       */
    }
    putchar(c);

  }
  return 0;
}

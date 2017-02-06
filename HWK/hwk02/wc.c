/* wc.c
 *
 * Name: Marjorie Wu
 * Desc: a program that reimplement the command-line wc
 */

#include <stdio.h>
#include <ctype.h>   // for isalpha

int main(){
  char c;
  int chars = 0;
  int words = 0;
  int lines = 0;

  while((c = getchar()) != EOF){
    // check # of characters
    chars ++;
    // check # of words
    if(isspace(c) && c != '\n'){
      words ++;
    }
    // check # of lines
    if( c == '\n'){
      lines ++;
    }

  }

  printf("chars: %d\n", chars);
  if (words == 0){
    printf("words: %d\n", words );
  } else{
    printf("words: %d\n", words+1);
  }
  printf("lines: %d\n",lines);

  return 0;
}

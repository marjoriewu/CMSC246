/* conv_dec.c
 *
 * Name: Marjorie Wu
 * Desc: a program that converts decimal to hex
 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

int main(){
char num;
int deci = 0;
char hex;
//read in decimal
while((num = getchar()) != EOF){
  if(isdigit(num)){
    int temp = num - '0';
    deci = deci * 10 + temp;
  }
  if(num == '\n'){
    break;
  }
}
//converting decimal in hex by using modding and dividing
int cal = 0;
while(deci != 0){
  cal = deci % 16;
  if( cal >= 0 && cal <  10){
    char temp = cal + '0';
    putchar(temp);
  } else{
    if(cal == 10){
      putchar('A');
    }
    if(cal == 11){
      putchar('B');
    }
    if(cal == 12){
      putchar('C');
    }
    if(cal == 13){
      putchar('D');
    }
    if(cal == 14){
      putchar('E');
    }
    if(cal == 15){
      putchar('F');
    }
 }
 deci = deci / 16 ;
}
printf("\n");
return 0;
}

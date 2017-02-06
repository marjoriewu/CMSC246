/* conv_hex.c
 *
 * Name: Marjorie Wu
 * Desc: a program that converts hex to octal
 */

#include <stdio.h>
#include <ctype.h>

int main(){
  char hex;
  int counter = 0;
  int hex_array[3];
  int oct_array[4];
  for (int i = 0; i < 4; i ++){
    oct_array[i] = 0;
  }

  // read in hex
  while(((hex = getchar()) != EOF) || (counter % 3 != 0)){
    int temp;
    if( hex >= 48 && hex <= 57){
      temp = hex - '0';
    } else if( hex >= 65 && hex <= 70){
      temp = hex - 'A' + 10;
    } else{
      continue;
    }
    counter ++;
    int x = counter % 3;
    hex_array[x] = temp;

    //convert into octal
    //the first digit in octal
    if(counter % 3 == 1){
      if(temp >= 8){
        oct_array[0] = temp - 8;
        oct_array[1] ++;
      } else{
        oct_array[0] = temp;
      }
    }
    //the second digit in octal
    if(counter % 3 == 2){
      oct_array[1] += (temp % 4) * 2;
      oct_array[2] += temp/4;
    }
    //the third digit in octal
    if(counter %3 == 0){
      oct_array[2] += temp % 2;
      oct_array[3] += temp / 2;
    }

    //print in octal
    if(hex == EOF){
      	char oct1 = oct_array[0] + '0';
      	putchar(oct1);
        if(oct_array[1] == 0 && oct_array[2] == 0 && oct_array[3] == 0){
          break;
        } else{
          char oct2 = oct_array[1] + '0';
          putchar(oct2);
        }
        if(oct_array[2] == 0 && oct_array[3] == 0){
          break;
        } else{
          char oct3 = oct_array[2] + '0';
          putchar(oct3);
        }
        if(oct_array[3] == 0){
          break;
        } else{
          char oct4 = oct_array[3] + '0';
          putchar(oct4);
        }
      } else if (counter % 3 == 0){
        char oct1 = oct_array[0] + '0';
      	putchar(oct1);
      	oct_array[0] = 0;
      	char oct2 = oct_array[1] + '0';
      	putchar(oct2);
      	oct_array[1] = 0;
      	char oct3 = oct_array[2] + '0';
      	putchar(oct3);
      	oct_array[2] = 0;
      	char oct4 = oct_array[3] + '0';
      	putchar(oct4);
      	oct_array[3] = 0;
      }
      temp = 0;
    }
    printf("\n");
    return 0;
  }

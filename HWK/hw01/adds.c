/* add2.c
 *
 * Name: Marjorie Wu
 * Desc:
 */

#include <stdio.h>

int main(){
    int x,y,z;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a number: ");
    scanf("%d", &y);

    z = x + y;
    printf("%d + %d = %d\n", x, y, z);
    return 0;
  }

#include <stdio.h>
#include <stdlib.h>

void Swap (int,int);
int main()
{
  int number_1,number_2;
  printf("Enter First Number \n");
  scanf("%i",&number_1);
  printf("Enter Second Number \n");
  scanf("%i",&number_2);
  Swap (number_1,number_2);
    return 0;
}
 void Swap (int num1,int num2)
 {
     printf("Before Swap \nx = %i   y = %i",num1,num2);
     printf("\nAfter Swap \nx = %i   y = %i",num2,num1);
 }

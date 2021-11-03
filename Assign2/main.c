#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number_1 , number_2;
   char op;
   printf("Enter The Operator\n");
   scanf("%c",&op);
   printf("Enter Number_1\n");
   scanf("%i",&number_1);
   printf("Enter Number_2\n");
   scanf("%i",&number_2);
   switch (op)
   {
       case '+' :  printf ("The Result = %i",number_1+number_2); break;
       case '-' :  printf ("The Result = %i",number_1-number_2); break;
       case '*' :  printf ("The Result = %i",number_1*number_2); break;
       case '/' :  printf ("The Result = %f",(float)number_1/number_2); break;
   }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
void edit(int*);
int main()
{
    int x;
    printf("Enter The value of x\n");
    scanf("%i",&x);
    printf ("Before Calling edit x = %i\n",x);
    edit(&x);
    printf ("After Calling edit x = %i",x);
    return 0;
}
void edit (int* x)
{
    *x+=1;
}

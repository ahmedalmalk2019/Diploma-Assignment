#include <stdio.h>
#include <stdlib.h>
void ascend (int [], int );
int main()
{
    int arr_1[5];
    for (int i = 0 ; i < 5 ; i++)
    {
        scanf("%i",&arr_1[i]);
    }
    ascend(arr_1,5);
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("%i     ",arr_1[i]);
    }
    printf ("\nThe Maximum number is %i in position %i\n",arr_1[4],4);
    printf ("The Minimum number is %i in position %i\n",arr_1[0],0);
}

void ascend(int arr[],int count)
{
    int j,k,temp;
    for (j = 0 ; j < count ; j++)
    {
        for (k = j + 1 ; k < count ; k++)
        {
            if (arr[k] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }

}

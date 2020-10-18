/* 4. Insert a value X (Take input X from user) in the array at Kth  (take input K from user) index and shift all other value to right.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include<stdio.h>
int main()
{
    int a[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i, X,K;

    printf("Enter the value of X :\n");
    scanf("%d",&X);

    printf("Enter the value of K :\n");
    scanf("%d",&K);

    if(K<0 || K>=max_size)
    {
      printf("Array is above the limit.\n");
    }

    else if(K>size)
    {
      printf("Array is above the limit.");
    }

    else
    {
        printf("Before Operation :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

        for(i=size-1;i>=K;i--)
        {
           a[i+1] = a[i];
        }

         a[K] = X;
         size++;

        printf("After Operation :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }


    }

    return 0;
}

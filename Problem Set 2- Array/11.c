/* 11. Delete a value from after Kth index (take input K from user) from the array shift all other value to left.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include<stdio.h>
int main()
{
    int a[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i,K;

    printf("Enter Index of K :\n");
    scanf("%d",&K);
    K++;

    if(K<0 || K>=max_size)
    {
      printf("Array is above the limit");
    }

    else if(K>=size)
    {
      printf("Array is above the limit");
    }

    else
    {
        printf("Before Operation :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

        for(i=K;i<size-1;i++)
        {
          a[i] = a[i+1];
        }
         size--;

        printf("After Operation :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

    }

    return 0;
}


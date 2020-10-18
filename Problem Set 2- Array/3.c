/* 3.Insert a value X (take input X from user) in the array at third (3rd) index and shift all other value to right.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include<stdio.h>
int main()
{
    int a[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i, X;

    printf("Enter the value of X :\n");
    scanf("%d",&X);

    printf("Before Operation :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    int index = 3;
    for(i=size-1;i>=index;i--)
    {
       a[i+1] = a[i];
    }

     a[index] = X;
     size++;

    printf("After Operation :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    return 0;
}




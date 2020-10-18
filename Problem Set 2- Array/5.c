/* 5. Update fifth (5th) index with another value.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include<stdio.h>
int main()
{
    int a[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i;

    printf("Before Operation :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n");

     a[5] = 80;

    printf("After Operation :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
     return 0;
}

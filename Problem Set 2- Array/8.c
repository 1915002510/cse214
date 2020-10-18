/*8.	Search a value X (take input X from user) in the array and print the index if X found in the array otherwise print-1.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include<stdio.h>
int main()
{
    int a[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i,X,y=-1;

    printf("Enter the value of X :\n");
    scanf("%d",&X);

    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n");

    for(i=0;i<size;i++)
    {
      if(X == a[i])
        {
         y = i;
        }
    }

    if(y==-1)
    {
     printf("-1");
    }
    else
    {
     printf("%d",y);
    }

    return 0;
}

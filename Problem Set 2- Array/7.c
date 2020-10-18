/* 7.	Search a value X (take input X from user) in the array and print “Found” if X found in the array otherwise print “Not Found”.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include<stdio.h>
int main()
{
    int a[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i,X,y=0;

    printf("Enter value of X :\n");
    scanf("%d",&X);

    for(i=0;i<size;i++)
    {
      if(X == a[i])
        {
         y = 1;
        }
    }

    if(y==0)
    {
     printf("Not Found");
    }
    else
    {
     printf("Found");
    }

    return 0;
}

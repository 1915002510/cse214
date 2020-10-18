/* 15.	Delete a value X (take input X from user) from the array shift all other value to left. If X is not “Element Not Found”. Delete all the occurrence of the value.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include<stdio.h>
int main()
{
    int a[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i,X,y=-1,n;

    printf("Enter the value of X :\n");
    scanf("%d",&X);

    for(i=0;i<size;i++)
    {
      if(X==a[i])
        {
         y=i;
        }
    }

    if(y!=-1)
    {
        printf("\nBefore Operation :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

        for(i=0;i<size;i++)
        {
          if(X==a[i])
            {
             y=i;
             for(n=y;n<size-1;n++)
             {
               a[n]=a[n+1];
             }
              size--;
            }
        }
        printf("After Operation : \n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");
    }

    else
    {
        printf("Element Not Found\n");
    }

    return 0;
}

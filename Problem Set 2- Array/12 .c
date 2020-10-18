/* 12.	Delete a value X (take input X from the array shift all other value to left. If X is not present in the given array print “Element Not Found”. Only delete the first occurrence of the value.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include<stdio.h>
int main()
{
    int a[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i,X,y=-1;

    printf("Enter the value X :\n");
    scanf("%d",&X);

    for(i=0;i<size;i++)
    {
      if(X==a[i])
        {
         y=i;
         break;
        }
    }

    if(y!=-1)
    {
        printf("Before Operation :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

        for(i=y;i<size-1;i++)
            {
              a[i]=a[i+1];
            }
            size--;
        printf("After Operation :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
    }

    else{
      printf("Element Not Found");
    }
    return 0;
}

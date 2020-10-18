/* 1. Scan values from user into an array until user input is 0 (Zero).
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include<stdio.h>
int main()
{
    int array[100], max_size = 100;

    printf("Enter values :\n");

    int a=0;
    for(a=0;a<100;a++)
    {
        scanf("%d",&array[a]);
        if(array[a]==0)
        {
            break;
        }
         else if(a>=max_size)
         {
           printf("Overflow\n");
         }
    }


    return 0;
}


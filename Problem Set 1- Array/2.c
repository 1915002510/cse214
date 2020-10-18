/* 2. Scan values from user into an array until end of file.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include<stdio.h>
int main()
{
    int array[100], max_size = 100;

    printf("Enter values :\n");

    int a=0;


      while((scanf("%d",&array[a]))!=EOF)
      {
         a++;
         if(a>=max_size)
         {
           printf("Overflow\n");
         }
      }


    return 0;
}


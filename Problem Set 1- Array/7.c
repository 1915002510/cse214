/* 7. Print the array element in reverse order Each element should be separated by space.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include <stdio.h>
int main ()
{

int x[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i;

for (i=0; i<size;i++)
    {
    printf("%d ", x[i]);
    }
printf("\n");

for (i=size-1;i>=0;i--)
    {
    printf("%d ",x[i]);
    }
return 0;
}

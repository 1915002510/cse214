/* 6. Print entire each element separated by comma.
Name: Sanower Hossain Rabbi
ID: 1915002510
*/
#include <stdio.h>
int main ()
{
int x[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i;

for(i=0;i<size;i++)
{
    printf("%d", x[i]);
    printf(",");
}
return 0;
}

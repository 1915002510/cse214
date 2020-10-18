1. Take Input N form user an array.
```
  int x [100], max_size=100, size=0, N;
  scanf("%d",&N);
```
2. User Input into an array until and end.

```
 while((scanf("%d",&array[a]))!=EOF)
      {
         a++;
         if(a>=max_size)
         {
           printf("Overflow\n");
         }
      }
```

3. User Input into an array until user input is 0(Zero).

```
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

 ```
      
4. Array Each element in newline.
      
  ```
     int x[100] = {36,19,3,15,5,6,18,8,1,20}, max_size = 100, size = 10, i; 
     for (i= 0; i<size;i++)
    {
    printf("%d \n", x[i]);
    }
  ```
    
5. Aray each element separated by space.
    
 ```
    for (i=0; i<size; i++)
    {
        printf("%d ",x[i]);
    }
 ```
6. An array each element separated by comma.
    
 ```
    for(i=0;i<size;i++)
  {
    printf("%d", x[i]);
    printf(",");
  }
 ```

7. Aray element in reverse order Each element should be separated by space.

  ```
    for (i=0; i<size;i++)
    {
    printf("%d ", x[i]);
    }
    printf("\n");

    for (i=size-1;i>=0;i--)
    {
    printf("%d ",x[i]);
    }
  ```

## Problem Set 1- Array

### [1. Take Input N form user an array.](https://github.com/1915002510/cse214/blob/main/Problem%20Set%201-%20Array/1.c)
```
      int x [100], max_size=100, size=0, N;
      scanf("%d",&N);
```
### [2. User Input into an array until and end.](https://github.com/1915002510/cse214/blob/main/Problem%20Set%201-%20Array/2.c)

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

### [3. User Input into an array until user input is 0(Zero).](https://github.com/1915002510/cse214/blob/main/Problem%20Set%201-%20Array/3.c)

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
      
### [4. Array Each element in newline.](https://github.com/1915002510/cse214/blob/main/Problem%20Set%201-%20Array/4.c)
      
  ```
     int x[100] = {36,19,3,15,5,6,18,8,1,20}, max_size = 100, size = 10, i; 
     for (i= 0; i<size;i++)
      {
      printf("%d \n", x[i]);
      }
  ```
    
### [5. Aray each element separated by space.](https://github.com/1915002510/cse214/blob/main/Problem%20Set%201-%20Array/5.c)
    
 ```
      for (i=0; i<size; i++)
      {
        printf("%d ",x[i]);
      }
 ```
### [6. An array each element separated by comma.](https://github.com/1915002510/cse214/blob/main/Problem%20Set%201-%20Array/6.c)
    
 ```
      for(i=0;i<size;i++)
       {
      printf("%d", x[i]);
      printf(",");
      }
 ```

### [7. Aray element in reverse order Each element should be separated by space.](https://github.com/1915002510/cse214/blob/main/Problem%20Set%201-%20Array/7.c)

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

## Problem Set 2- Array

1.	Any value at  10th index of the array.

```
    int a[100] = {36,19,3,15,5,6,18,8,10,20}, max_size = 100, size = 10, i;

    printf("Before Operation :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n");

    a[10] = 20;
    size++;
    printf("After Operation :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
``` 

2.	Take input X from user array at the end of currently stored elements.

```
    printf("Enter the value of X :\n");
    scanf("%d",&X);
```

3.	Take input X from user array at third (3rd) index and shift all other value to right.

```
    int index = 3;
    for(i=size-1;i>=index;i--)
    {
       a[i+1] = a[i];
    }

     a[index] = X;
     size++;
```

4.	Take input X from user array at Kth  (take input K from user) index and shift all other value to right.

```
     for(i=size-1;i>=K;i--)
     {
       a[i+1] = a[i];
     }

       a[K] = X;
       size++;
```

5.	Update 5th index with another value.

```
      a[5] = 80;
```

6.	Update Kth from user index with the value  X  from user.

```
      a[K] = X;
```

7.	Take input X from user this array and print “Found” if X found in the array otherwise print “Not Found”.

```
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
```

8.	Take input X from user in the array and print the index if X found in the array otherwise print-1.

```
      if(y==-1)
        {
        printf("-1");
        }
      else
        {
        printf("%d",y);
        }
```

9.	Delete a value from Kth index  input K from user the array shift all other value to left.

```
        for(i=K;i<size-1;i++)
        {
          a[i] = a[i+1];
        }
         size--;
```

10.	Delete a value from before Kth index take input K from user the array shift all other value to left.

```
        for(i=K;i<size-1;i++)
        {
          a[i] = a[i+1];
        }
         size--;
```

11.	Delete a value from after Kth index take input K from user the array shift all other value to left.

```
        for(i=K;i<size-1;i++)
        {
          a[i] = a[i+1];
        }
         size--;
```

12.	Delete a value X take input X from array shift all other value to left. If X is not present in the given array print “Element Not Found”. Only delete the first occurrence of the value.

```
        for(i=y;i<size-1;i++)
            {
              a[i]=a[i+1];
            }
            size--;
```

13.	Delete a value before X take input X from userthe array shift all other value to left. If X is not present in the given array print “Element Not Found”. Only delete the first occurrence of the value.

```
        for(i=y;i<size-1;i++)
            {
              a[i]=a[i+1];
            }
            size--;
```

14.	Delete a value after X take input X from userthe array shift all other value to left. If X is not present in the given array print “Element Not Found”. Only delete the first occurrence of the value.

```
        for(i=y;i<size-1;i++)
            {
              a[i]=a[i+1];
            }
            size--;
```

15.	Delete a value X take input X from user  the array shift all other value to left. If X is not “Element Not Found”. Delete all the occurrence of the value.

```
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
```

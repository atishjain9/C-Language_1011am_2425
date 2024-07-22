# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define R 3
# define C 3
int main()
{
    int a[R][C],b[R][C],cres[R][C];
    int r,c;


srand(time(0));
 //filling first array with random numbers
for(r=0;r<R;r++)
{
 for(c=0;c<C;c++)
 {
    a[r][c]=rand()%100;
  }
}

 //filling second array with random numbers
for(r=0;r<R;r++)
{
 for(c=0;c<C;c++)
 {
    b[r][c]=rand()%100;
  }
}

//Adding two arrays
for(r=0;r<3;r++)
{
    for(c=0;c<3;c++)
    {
        cres[r][c]=a[r][c]+b[r][c];
    }
}

//display first array elements
printf("\nFirst Array");
printf("\n--------------\n");
for(r=0;r<R;r++)
{
  for(c=0;c<C;c++)
  {
     printf("\t%d",a[r][c]);
  }
 printf("\n\n");
}

//display second array elements
printf("\nSecond Array");
printf("\n--------------\n");
for(r=0;r<R;r++)
{
  for(c=0;c<C;c++)
  {
     printf("\t%d",b[r][c]);
  }
 printf("\n\n");
}

//display Result array elements
printf("\nResult Array");
printf("\n--------------\n");
for(r=0;r<R;r++)
{
  for(c=0;c<C;c++)
  {
     printf("\t%d",cres[r][c]);
  }
 printf("\n\n");
}


   printf("\n");
  return 0;
}

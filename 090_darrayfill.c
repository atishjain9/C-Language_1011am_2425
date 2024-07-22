#  include <stdio.h>
# define R 3
# define C 3
int main()
{
    int arr[R][C];
    int r,c,m=10;

    //filling array

for(r=0;r<R;r++)
{
 for(c=0;c<C;c++)
 {
    arr[r][c]=m;
    m=m+10;
 }
}


//display array elements
for(r=0;r<R;r++)
{
  for(c=0;c<C;c++)
  {
     printf("\t%d",arr[r][c]);
  }
 printf("\n\n");
}



   printf("\n");
  return 0;
}

#  include <stdio.h>

int main()
{
    int arr[3][3];
    int r,c;

    //Reading array input

for(r=0;r<3;r++)
{
 for(c=0;c<3;c++)
 {
    printf("Enter a no for(%d,%d):",r,c);
    scanf("%d",&arr[r][c]);
 }
}


//display array elements
for(r=0;r<3;r++)
{
  for(c=0;c<3;c++)
  {
     printf("\t%d",arr[r][c]);
  }
 printf("\n");
}



   printf("\n");
  return 0;
}

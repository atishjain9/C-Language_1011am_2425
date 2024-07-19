#  include <stdio.h>
int main()
{
    int r,c,count=0;

for(r=1;r<=10;r++) //outer loop
{
  for(c=1;c<=5;c++) //inner loop
  {
      count++;
      printf("\t%d",c);
  }
  printf("\n");
}

printf("\nInner loop is iterated for %d times",count);
   return 0;
}

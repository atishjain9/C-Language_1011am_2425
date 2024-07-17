#  include <stdio.h>
int main()
{
    int no,f,temp;
    no=0;
    f=1;
    printf("Enter a no:");
    scanf("%d",&no);
    temp=no;

  while(no>=1)
  {
    f=f*no;
    no--;
  }
  no=temp;
  printf("Factorial of %d is %d",no,f);

   return 0;
}

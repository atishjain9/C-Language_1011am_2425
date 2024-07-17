#  include <stdio.h>
int main()
{
  int a,b,c;
  a=1;
  b=c=0;

  while(c<=100)
  {
      c=a+b;
      if(c<100)
         printf("\t%d",c);
      a=b;
      b=c;
  }




   return 0;
}

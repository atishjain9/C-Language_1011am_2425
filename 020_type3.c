#include <stdio.h>
int main()
{
   int x=100;
   char c = 'c';
   int sum;

   sum = x + c;
   printf("Value of sum : %d\n", sum );

   //assigning higher type to lower type
   double d=12.890;
   int i=d;
   printf("%d",i);

   return 0;
}

#  include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int x,i;

    srand(time(0));
    for(i=1;i<=10;i++)
    {
       x=rand()%10000;
       printf("\n%d",x);
    }
   printf("\n");
  return 0;
}

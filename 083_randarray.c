#  include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int arr[10];
    int x,i;

    srand(time(0));
    for(i=0;i<10;i++)
    {
       x=rand()%1000;
       arr[i]=x;
     }

     for(i=0;i<10;i++)
     {
         printf("\n%d - %d",i,arr[i]);
     }
   printf("\n");
  return 0;
}

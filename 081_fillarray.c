#  include <stdio.h>
int main()
{
    int arr[10],i,m=5;

    for(i=0;i<10;i++)
    {
        arr[i]=m;
        m+=5; //m=m+5
    }

    for(i=0;i<10;i++)
    {
        printf("\n%d - %d",i,arr[i]);
    }

   printf("\n");
  return 0;
}

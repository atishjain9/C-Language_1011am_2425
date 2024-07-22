#  include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int arr[10];
    int x,i,j,temp;

    //filling the array with random numbers
    srand(time(0));
    for(i=0;i<10;i++)
    {
       x=rand()%1000;
       arr[i]=x;
     }

     printf("\nUnsorted Elements are:\n");
     printf("------------------------\n");
     for(i=0;i<10;i++)
     {
         printf("  %d",arr[i]);
     }

     //sorting logic
for(i=0;i<10;i++)
{
  for(j=i+1;j<10;j++)
  {
     if(arr[i]<arr[j])
     {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
     }
  }
}
     printf("\nsorted Elements are:\n");
     printf("------------------------\n");
     for(i=0;i<10;i++)
     {
         printf("  %d",arr[i]);
     }


   printf("\n");
  return 0;
}

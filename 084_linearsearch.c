#  include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int arr[10];
    int x,i,key;
    char found='n';

    srand(time(0));
    for(i=0;i<10;i++)
    {
       x=rand()%1000;
       arr[i]=x;
     }

     printf("\nElements are:\n");
     printf("------------------------\n");
     for(i=0;i<10;i++)
     {
         printf("  %d",arr[i]);
     }

     printf("\n\nEnter key item to search..:");
     scanf("%d",&key);

     for(i=0;i<10;i++)
     {
         if(arr[i]==key)
         {
             found='y';
             break;
         }
     }

     if(found=='y')
        printf("%d is found at %d index",key,i);
     else
        printf("%d is not found..",key);

   printf("\n");
  return 0;
}

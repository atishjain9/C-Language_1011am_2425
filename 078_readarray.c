#  include <stdio.h>
int main()
{
    int a[10],i;

    for(i=0;i<10;i++)
    {
     printf("Enter %d no:",i+1);
     scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
        printf("\n%d - %d",i,a[i]);


 printf("\n");
 return 0;
}

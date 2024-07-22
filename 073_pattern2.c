#  include <stdio.h>
int main()
{
    int r,c,tar,count=0;

    printf("Enter how many rows:");
    scanf("%d",&tar);

 for(r=1;r<=tar;r++)
 {
    for(c=1;c<=tar;c++)
    {
        count++;
        if(c<=r)
          printf("  *");
       else
          printf("   ");
    }
    printf("\n");
 }

 printf("\nno of iterations to print this pattern is:%d",count);
 printf("\n");
 return 0;
}

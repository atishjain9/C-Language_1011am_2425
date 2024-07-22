#  include <stdio.h>
int main()
{
    int r,c,tar;

    printf("Enter how many rows:");
    scanf("%d",&tar);

 for(r=1;r<=tar;r++)
 {
    for(c=1;c<=r;c++)
    {
        printf(" %d",r);
    }
    printf("\n");
 }


 printf("\n");
 return 0;
}

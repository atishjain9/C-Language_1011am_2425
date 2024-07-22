#  include <stdio.h>
int main()
{
    int r,c,tar;

    printf("Enter how many rows:");
    scanf("%d",&tar);

 for(r=1;r<=tar;r++)
 {
    for(c=1;c<=10;c++)
    {
        printf("  *");
    }
    printf("\n");
 }

   return 0;
}

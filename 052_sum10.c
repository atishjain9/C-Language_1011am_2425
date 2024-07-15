# include <stdio.h>
int main()
{
    int no,c,sum=0;

    for(c=1;c<=10;c++)
    {
        printf("Enter %d no:",c);
        scanf("%d",&no);
        sum=sum+no;
     }

    printf("\nSum of 10 numbers is:%d",sum);

   return 0;
}

#  include <stdio.h>
int main()
{
    int no,r,sum,temp;
    no=r=sum=0;

    printf("Enter a no:");
    scanf("%d",&no);
    temp=no;

    while(no>0)
    {
        r=no%10;
        sum=sum+(r*r*r);
        no=no/10;
    }
    no=temp;

    if(no==sum)
        printf("%d is Armstrong...",no);
    else
        printf("%d is Not an Armstrong...",no);


   return 0;
}

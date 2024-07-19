#  include <stdio.h>
int main()
{
    int no,r,sum=0,temp;
    for(no=1;no<=1000;no++)
    {
        temp=no;
        sum=0;
        while(no!=0)
        {
            r=no%10;
            sum=sum+(r*r*r);
            no=no/10;
        }
        no=temp;

        if(no==sum)
           printf("\n%d",no);
    }

   return 0;
}

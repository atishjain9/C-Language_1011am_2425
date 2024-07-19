#  include <stdio.h>
int main()
{
    int no,d;

    for(no=3;no<=100;no++)
    {
        d=2;
        while(d<no)
        {
            if(no%d==0)
                break;

            d++;
        }

       if(d==no)
        printf("\t%d",no);
    }
   return 0;
}

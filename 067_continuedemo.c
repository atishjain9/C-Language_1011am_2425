#  include <stdio.h>
int main()
{
    int no=1;

    for(no=1;no<=10;no++)
    {
        if(no==5)
        {
           continue;
        }
        printf("\n%d",no);
    }
    printf("\nout of the loop....");

   return 0;
}

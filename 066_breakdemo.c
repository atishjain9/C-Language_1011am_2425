#  include <stdio.h>
int main()
{
    int no=1;

    while(no<=10)
    {
        if(no==5)
        {
            break;
        }
        printf("\n%d",no);
        no++;
    }
    printf("\nout of the loop....");

   return 0;
}

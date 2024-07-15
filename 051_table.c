# include <stdio.h>
int main()
{
    int tno, c,res;
    tno=res=0;
    c=1;

    printf("Enter Table no to print:");
    scanf("%d",&tno);

    while(c<=12)
    {
        res=tno*c;
        printf("\n%d * %d = %d",tno,c,res);
        c++;
    }

   return 0;
}

# include <stdio.h>
int main()
{
    int cost,days,dis,ext,final_amt;
    char mode;
    cost=days=dis=ext=final_amt=0;

    printf("Enter TV Cost:");
    scanf("%d",&cost);

    printf("Are you Paying cash(y/n):");
    fflush(stdin);
    scanf("%c",&mode);

    if(mode=='y' || mode=='Y')
    {
        dis=cost*25/100;
        final_amt=cost-dis;
    }
    else
           if(mode=='n' ||mode=='N')
            {
                printf("In How many Days will you Pay...:");
                scanf("%d",&days);
                if(days<7)
                {
                    dis=cost*15/100;
                    final_amt=cost-dis;
                }
                else
                {
                    ext=cost*10/100;
                    final_amt=cost+ext;
                }

            }
            else
            {
                  printf("\aInvalid mode....");
                  exit(0);
            }


             if(dis>0)
                  printf("\nDiscont is:%d",dis);
            else
                  printf("\nLate Payment Charges:%d",ext);

             printf("\nFinal Bill Amount is:%d",final_amt);
   return 0;
}

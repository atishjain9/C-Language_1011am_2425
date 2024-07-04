#include <stdio.h>
int main()
{
    int sales,dis,finalamt;
    sales=dis=finalamt=0;

    printf("Enter Sales Amount:");
    scanf("%d",&sales);

    if(sales>=25000)
        dis=sales*10/100;
    else
        dis=sales*5/100;

    finalamt = sales - dis;

    printf("\nDiscont is:%d",dis);
    printf("\nFinal Amount is:%d",finalamt);

   return 0;
}

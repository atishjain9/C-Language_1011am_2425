//Program to calculate amount for the inputted rate and qty
//Note: Rate should be in decimals

# include <stdio.h>
int main()
{
    int qty;
    float rate,amt;
    qty=rate=amt=0;

    printf("Enter Quantity:");
    scanf("%d",&qty);

    printf("Enter Rate:");
    scanf("%f",&rate);

    amt=rate*qty;

    printf("Total Amount is: Rs.%.2f /-",amt);

    return 0;
}

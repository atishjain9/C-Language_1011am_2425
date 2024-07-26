# include <stdio.h>
int main()
{
    double calcamt(double,int);  //func decl or func prototype

    int qty;
    double rate,amt;
    qty=rate=amt=0;

    printf("Enter Quantity:");
    scanf("%d",&qty);

    printf("Enter Rate:");
    scanf("%lf",&rate);

    amt=calcamt(rate,qty); //func call or invocation or calling a func

    printf("Amount to be Paid is:%lf",amt);

    printf("\n");
    return 0;
}

double calcamt(double r,int q)
{
    return r*q;
}




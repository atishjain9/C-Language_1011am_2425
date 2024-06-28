//Program to perform addition of two numbers

# include <stdio.h>
int main()
{
    int no1,no2,res;
    no1=0;
    no2=0;
    res=0;

    printf("\n------------------------------------------------------------");
    printf("\n\tProgram to Perform Addition of Two Numbers");
    printf("\n------------------------------------------------------------\n\n");

    printf("Enter first no....: ");
    scanf("%d",&no1);
    printf("Enter second no...: ");
    scanf("%d",&no2);

    res = no1 + no2;

    printf("Sum of 2 no's is..: %d",res);

    return 0;
}

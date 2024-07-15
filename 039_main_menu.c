# include <stdio.h>
int main()
{
    int a,b,c,opt;
    a=b=c=opt=0;

    printf("Main - Menu");
    printf("\n------------");

    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");

    printf("\n\nEnter first no:");
    scanf("%d",&a);
    printf("Enter second no:");
    scanf("%d",&b);

    printf("Enter ur option(1-5):");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1: c=a +b; printf("\nResult is:%d + %d = %d",a,b,c); break;
        case 2: c=a-b; printf("\nResult is:%d - %d = %d",a,b,c); break;
        case 3: c=a*b; printf("\nResult is:%d * %d = %d",a,b,c); break;
        case 4: c=a/b; printf("\nResult is:%d / %d = %d",a,b,c); break;
        case 5: exit(0);
        default: printf("\aInvalid Option...");
    }

    printf("\n\n");
     return 0;
}

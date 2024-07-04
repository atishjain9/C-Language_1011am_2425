#include <stdio.h>
int main()
{
    int a,b;
    a=b=0;

    printf("Enter first no:");
    scanf("%d",&a);

    printf("Enter second no:");
    scanf("%d",&b);

    if(a>b)
        printf("Biggest no is:%d",a);
    else
        printf("Biggest no is:%d",b);


   return 0;
}

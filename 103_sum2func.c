# include <stdio.h>
int main()
{
    int sum(int,int); //func declaration

    int a,b,c;
    a=b=c=0;

    printf("Enter first no:");
    scanf("%d",&a);
    printf("Enter second no:");
    scanf("%d",&b);

    c=sum(a,b); //func calling

    printf("The Result is:%d",c);

    printf("\n");
    return 0;
}

int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
 }

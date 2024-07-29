# include <stdio.h>
int main()
{
    int a,b,c,*x,*y;

    printf("Enter 2 nos:");
    scanf("%d%d",&a,&b);

    x=&a;
    y=&b;

    c=*x+*y;

    printf("The Result is:%d",c);

    return 0;
}


# include <stdio.h>
int main()
{
    int big2(int,int);  //func declaration

    int a,b;
    printf("Enter 2 nos:");
    scanf("%d%d",&a,&b);

    printf("Biggest of 2 no is:%d",big2(a,b));
    printf("\nMaximum of 2 nos:%d",big2(120,900));

    printf("\n");
    return 0;
}

int big2(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}


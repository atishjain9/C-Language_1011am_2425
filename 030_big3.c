//Example on nested if
#include <stdio.h>
int main()
{
    int a,b,c,big;
    a=b=c=big=0;

    printf("Enter 3 nos:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
        if(a>c)
            big=a;
        else
            big=c;
    else
            if(b>c)
                big=b;
            else
                big=c;

    printf("Biggest is...:%d",big);
   return 0;
}

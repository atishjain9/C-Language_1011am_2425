#include <stdio.h>
int main()
{
    int no=0;

    printf("Enter a no:");
    scanf("%d",&no);

    if(no%2==0)
        printf("%d is Even...",no);
    else
        printf("%d is Odd...",no);

   return 0;
}

# include <stdio.h>
int main()
{
    int no;

    printf("Enter a no:");
    scanf("%d",&no);

    no%2 ? printf("Odd...") : printf("Even");


     return 0;
}

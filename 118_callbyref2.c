# include <stdio.h>
int main()
{
    int x=0;
    char name[20];
    printf("Enter a no:");
    scanf("%d",&x); //call by ref

    printf("Enter ur name:");
    scanf("%s",name); //call by ref

    printf("%d",x);
    printf("\n%s",name);

    printf("\n");
    return 0;
}

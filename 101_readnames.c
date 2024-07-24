# include <stdio.h>
int main()
{
    char names[5][20];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter %d name:",i+1);
        gets(names[i]);
    }
    for(i=0;i<5;i++)
        puts(names[i]);

    printf("\n");
    return 0;
}

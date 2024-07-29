# include <stdio.h>
int i;
int main()
{
    void display(char*);
    char str[100];
    printf("Enter a string:");
    gets(str);

    display(str);

    printf("\n");
    return 0;
}

void display(char *x)
{
    for(i=0;*(x+i)!='\0';i++)
    {
         printf("\n%u - %c",x+i,*(x+i));
    }
}


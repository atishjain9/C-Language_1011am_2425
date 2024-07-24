# include <stdio.h>
int main()
{
    char str[50];
    int i=0;

    printf("Enter a String...:");
    gets(str);

    if(str[0]>=97 && str[0]<=122)
        putchar(str[0]-32);
    else
            putchar(str[0]);

    for(i=1;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            putchar(str[i]);
            i++;
            if(str[i]>=97 && str[i]<=122)
                putchar(str[i]-32);
            else
                putchar(str[i]);

        }
        else
        {
            if(str[i]>=65 && str[i]<=90)
                putchar(str[i]+32);
            else
                   putchar(str[i]);
        }
    }
    printf("\n");
    return 0;
}

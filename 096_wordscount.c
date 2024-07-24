# include <stdio.h>
int main()
{
    char str[50];
    int i,words=1;

    printf("Enter a String...:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            words++;
    }
    printf("\nNo of Words are:%d",words);

    printf("\n");
    return 0;
}

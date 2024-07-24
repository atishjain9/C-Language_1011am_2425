# include <stdio.h>
int main()
{
    char str1[500],str2[500];
    int i=0;

    printf("Enter a String...:");
    gets(str1);

 for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }

    str2[i]='\0';

    printf("\nCopied String is:%s",str2);



    printf("\n");
    return 0;
}

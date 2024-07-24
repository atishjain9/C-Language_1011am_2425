# include <stdio.h>
int main()
{
    char fn[50],ln[50],fullname[100];
    int i,j;

    printf("Enter ur first name...:");
    scanf("%s",&fn);

    printf("Enter ur last name...:");
    scanf("%s",&ln);

    for(i=0;fn[i]!='\0';i++)
    {
        fullname[i]=fn[i];
    }
    fullname[i]=' ';
    i++; //moving after the space

    for(j=0;ln[j]!='\0';j++,i++)
    {
        fullname[i]=ln[j];
    }

    fullname[i]='\0';

    printf("\nCopied Full name is:%s",fullname);



    printf("\n");
    return 0;
}

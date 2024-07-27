# include <stdio.h>
# include "mystring.h"
int main()
{
    char str[100];
    int len;
    printf("Enter a string:");
    gets(str);

    len=mystrlen(str);
    printf("Length of the string is:%d",len);

    printf("\n");
    return 0;
}








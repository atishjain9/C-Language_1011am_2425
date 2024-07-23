//Program to display inputted string char by char vertically
# include <stdio.h>
int main()
{
    char n[20];
    int i,len=0;

    printf("Enter a string:");
    scanf("%s",&n);

    for(i=0;n[i]!='\0';i++)
        len++;

    len--; //moving 1 char back from null char position

    for(;len>=0;len--)
        putchar(n[len]);

   printf("\n");
  return 0;
}

//Program to display inputted string char by char vertically
# include <stdio.h>
# include <string.h>
int main()
{
    char n[20];
    int i,len;

    printf("Enter a string:");
    scanf("%s",&n);

    len=strlen(n);

    for(i=0;i<len;i++)
        printf("%c\n",n[i]);

   printf("\n");
  return 0;
}

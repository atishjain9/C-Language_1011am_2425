//Program to display inputted string char by char vertically
# include <stdio.h>
int main()
{
    char n[20];
    int i;

    printf("Enter a string:");
    scanf("%s",&n);

    for(i=0;i<n[i]!='\0';i++)
        printf("%c\n",n[i]);

   printf("\n");
  return 0;
}

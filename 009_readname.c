//Program to read a name and display the same
//program name: 009_readname.c

# include <stdio.h>
int main()
{
    char name[100];
    printf("Heyy Enter ur name...:");
    scanf("%s",&name);

    printf("Hello %s, Welcome to C Language classes",name);

    return 0;
}

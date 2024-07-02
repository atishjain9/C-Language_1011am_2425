//program name: 013_asciidemo1.c

# include <stdio.h>
int main()
{
    int code;
    printf("Enter an ASCII Code(0-255)...:");
    scanf("%d",&code);

    printf("ASCII Character for %d is %c",code,code);

    return 0;
}

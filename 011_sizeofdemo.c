//program name: 011_sizeofdemo.c

# include <stdio.h>
int main()
{
    int x;
    char y;
    double z;

    printf("Memory allocated for x is:%d",sizeof(x));
    printf("\nMemory allocated for int datatype is:%d",sizeof(int));

    printf("\nMemory allocated for y is:%d",sizeof(y));
    printf("\nMemory allocated for char datatype is:%d",sizeof(char));

    printf("\nMemory allocated for z is:%d",sizeof(z));
    printf("\nMemory allocated for double datatype is:%d",sizeof(double));

    return 0;
}

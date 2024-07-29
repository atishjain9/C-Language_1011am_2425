# include <stdio.h>
int main()
{
    int x=10;
    int *y; //y is an pointer variable

    y=&x;

    printf("\nx is:%d",x);
    printf("\naddress of x is:%u",&x);
    printf("\nvalue of y is:%u",y);
    printf("\nvalue at the address of x:%d",*y);

    printf("\n%d",*(&x));

    return 0;
}


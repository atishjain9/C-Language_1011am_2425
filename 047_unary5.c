# include <stdio.h>
int main()
{
    int a=10,c=0;

    c=a++ + a++;

    printf("\na=%d",a);
    printf("\nc=%d",c);

   return 0;
}

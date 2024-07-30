#include <stdio.h>
main()
{
    display();
    display();
    display();

 printf("\n");
}

display()
{
    static int x=1;
    printf("\n%d",x++);
}



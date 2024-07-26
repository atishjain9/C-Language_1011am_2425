# include <stdio.h>
int main() //calling function
{
    void swap(int,int);

    int a,b;

    a=10;
    b=20;
    printf("Values of A and B Before calling Swap Function");
    printf("\nA = %d",a);
    printf("\nB = %d",b);

    swap(a,b);  // function call or called function

    printf("\n\nValues of A and B After calling Swap Function");
    printf("\nA = %d",a);
    printf("\nB = %d",b);

    printf("\n");
    return 0;
}

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

    return;
}






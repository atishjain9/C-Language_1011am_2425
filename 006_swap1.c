//Program to swap two numbers A and B

# include <stdio.h>
int main()
{
    int a,b,temp;
    a=b=temp=0;

    printf("Enter value for A:");
    scanf("%d",&a);

    printf("Enter value for B:");
    scanf("%d",&b);

    //business logic
    temp=a;
    a=b;
    b=temp;

    printf("\nA is:%d",a);
    printf("\nB is:%d",b);

    return 0;
}

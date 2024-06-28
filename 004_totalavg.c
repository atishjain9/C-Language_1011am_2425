# include <stdio.h>
int main()
{
    //variable declaration and initialization
    int c,cpp,java;
    float tot,avg;
    c=cpp=java=tot=avg=0;


    //input
    printf("Enter Marks for C Language:");
    scanf("%d",&c);

    printf("Enter Marks for CPP Language:");
    scanf("%d",&cpp);

    printf("Enter Marks for Java Language:");
    scanf("%d",&java);

    //Business Logic
    tot = c + cpp + java;
    avg = tot / 3;

    //output
    printf("\nTotal is:%.0f",tot);
    printf("\nAverage is:%.2f %%",avg);

    return 0;
}

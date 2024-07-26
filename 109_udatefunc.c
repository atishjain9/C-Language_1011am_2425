# include <stdio.h>
int main()
{
    int rate=9;
    printf("Rate is:%d",rate);
    update(rate);  //call by value
    printf("\nRate is:%d",rate);

    printf("\n");
    return 0;
}

update(int rate)
{
    rate=12;
    return;
}







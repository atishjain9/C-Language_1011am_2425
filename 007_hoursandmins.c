//Program to convert total mins into hours and mins

# include <stdio.h>
int main()
{
    int tm,h,m;
    tm=h=m=0;

    printf("Enter Total minutes:");
    scanf("%d",&tm);

    h = tm/60;
    m = tm%60;

    printf("Time is %d hrs and %d mins....",h,m);

    return 0;
}

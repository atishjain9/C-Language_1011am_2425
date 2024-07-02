//program name: 015_area.c

# include <stdio.h>
int main()
{
    const float PI=3.14;
    double radius,area;
    radius=area=0;

    printf("Enter Radius:");
    scanf("%lf",&radius);

    area=PI*radius*radius;

    printf("Area of Circle is:%lf",area);

    return 0;
}

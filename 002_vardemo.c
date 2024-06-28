//Program to demonstrate variable declaration and initilization
# include <stdio.h>
int main()
{
    int rollno=1001;
    char name[]="Raj";
    float avg=98.99;
    char gender='M';
    double height=5.6;

    printf("Rollno:%d",rollno);
    printf("\nName:%s",name);
    printf("\nAverage:%f",avg);
    printf("\nGender:%c",gender);
    printf("\nHeight:%lf",height);

    return 0;
}

# include <stdio.h>
int main()
{
    struct student
    {
        int rollno;
        char name[20];
        float avg;
    };

    struct student s1,s2;

    printf("size of s1 is:%d\n",sizeof(s1));

    printf("Enter Rollno:");
    scanf("%d",&s1.rollno);
    printf("Enter Name:");
    scanf("%s",&s1.name);
    printf("Enter Average:");
    scanf("%f",&s1.avg);

      printf("Enter Rollno:");
    scanf("%d",&s2.rollno);
    printf("Enter Name:");
    scanf("%s",&s2.name);
    printf("Enter Average:");
    scanf("%f",&s2.avg);


    printf("\n%d - %s - %f",s1.rollno,s1.name,s1.avg);
     printf("\n%d - %s - %f",s2.rollno,s2.name,s2.avg);

 printf("\n");
}





# include <stdio.h>
# define SIZE 100
int main()
{
    struct student
    {
        int rollno;
        char name[20];
        float avg;
    }s[SIZE];

    printf("size of s is:%d\n",sizeof(s));
    int i,x;
    printf("Enter how many students...:");
    scanf("%d",&x);

 for(i=0;i<x;i++)
{
    printf("Enter Rollno:");
    scanf("%d",&s[i].rollno);
    printf("Enter Name:");
    scanf("%s",&s[i].name);
    printf("Enter Average:");
    scanf("%f",&s[i].avg);
}


  for(i=0;i<x;i++)
    printf("\n%d - %s - %f",s[i].rollno,s[i].name,s[i].avg);

 printf("\n");
}





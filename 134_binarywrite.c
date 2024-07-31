# include <stdio.h>
int main()
{
    struct student
    {
        int rollno;
        char name[20];
        float avg;
    };

    char ch='y';
    struct student s;

    FILE *fp;
    fp=fopen("student.dat","ab");

while(ch=='y' || ch=='Y')
{
    system("cls");
    printf("\nEnter Rollno:");
    scanf("%d",&s.rollno);
    printf("Enter Name:");
    scanf("%s",&s.name);
    printf("Enter Average:");
    scanf("%f",&s.avg);

    fwrite(&s,sizeof(s),1,fp);

    printf("Do you want to add one more record(y/n):");
    fflush(stdin);
    ch=getche();
}

 printf("\n");
}





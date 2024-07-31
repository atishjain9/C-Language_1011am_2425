# include <stdio.h>
int main()
{
    struct student
    {
        int rollno;
        char name[20];
        float avg;
    };

    struct student s;

    FILE *fp;
    fp=fopen("student.dat","rb");

while(  (fread(&s,sizeof(s),1,fp))==1 )
{
    printf("\n%d - %s - %f",s.rollno,s.name,s.avg);
}

 printf("\n");
}





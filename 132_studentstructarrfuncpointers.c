# include <stdio.h>
# define SIZE 3
struct student
    {
        int rollno;
        char name[20];
        float avg;
    }s[SIZE];
      int i;
      typedef struct student stud;
int main()
{
    void display(struct student*);

    printf("size of s is:%d\n",sizeof(s));

 for(i=0;i<SIZE;i++)
{
    printf("Enter Rollno:");
    scanf("%d",&s[i].rollno);
    printf("Enter Name:");
    scanf("%s",&s[i].name);
    printf("Enter Average:");
    scanf("%f",&s[i].avg);
}

display(s);

 printf("\n");
}

void display(stud *x)
{
      for(i=0;i<SIZE;i++)
      {
          printf("\n%u - %d - %s - %f",x,x->rollno,x->name,x->avg);
          x++;
      }
}




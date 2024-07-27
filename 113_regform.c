# include <stdio.h>
# include "mystring.h"
int main()
{
    char fname[100],mname[100],sname[100];

    printf("Enter ur full name:");
    gets(sname);
    printf("Enter ur father name:");
    gets(fname);
    printf("Enter ur mother name:");
    gets(mname);

   printf("No of Words in student name are :%d",wcount(sname));
   printf("No of Words in father name are :%d",wcount(fname));
   printf("No of Words in mother name are :%d\n",wcount(mname));

   strproper(sname);
   strproper(fname);
   strproper(mname);

    printf("\n");
    return 0;
}








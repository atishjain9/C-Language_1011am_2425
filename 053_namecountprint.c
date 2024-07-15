#  include <stdio.h>
# include <string.h>
int main()
{
    char name[50];
    int len,count;

    printf("Enter ur name:");
    scanf("%s",&name);

    len=strlen(name);

    for(count=1;count<=len;count++)
    {
        printf("\n%d.%s",count,name);
    }




   return 0;
}

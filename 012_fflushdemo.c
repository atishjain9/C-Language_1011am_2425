//program name: 011_fflushdemo.c

# include <stdio.h>
int main()
{
    char name[50];
    char gender;
    int age;

    printf("Enter ur Name:");
    scanf("%s",&name);

    printf("Enter ur Gender(M/F):");
    fflush(stdin);
    scanf("%c",&gender);

    printf("Enter ur Age:");
    scanf("%d",&age);

    printf("\nName is:%s",name);
    printf("\nGender is:%c",gender);
    printf("\nAge is:%d",age);

    return 0;
}

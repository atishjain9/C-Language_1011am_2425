# include <stdio.h>
int main()
{
    char ms,gen;
    int age=0;

    printf("Enter Marital Status([M]arried/[U]nmarried):");
    scanf("%c",&ms);
    printf("Enter ur Gender(M/F):");
    fflush(stdin);
    scanf("%c",&gen);
    printf("Enter ur Age:");
    scanf("%d",&age);

    if ( (ms=='M'||ms=='m') || ( (gen=='M'||gen=='m') && age>=30) ||( (gen=='F'||gen=='f') &&age>=25))
        printf("Eligible for Bonus...");
    else
        printf("Not Eligible for Bonus...");

   return 0;
}

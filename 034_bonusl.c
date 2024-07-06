# include <stdio.h>
int main()
{
    char ms,gen;
    int age=0;

    printf("Enter Marital Status([M]arried/[U]nmarried):");
    scanf("%c",&ms);

    if(ms=='M' || ms=='m')
            printf("Eligible for Bonus...");
    else
            if(ms=='U' || ms=='u')
             {
                printf("Enter ur Gender(M/F):");
                fflush(stdin);
                scanf("%c",&gen);

                 if(gen=='M' || gen=='m')
                    {
                        printf("Enter ur Age:");
                        scanf("%d",&age);

                        if(age>0 && age<=150)
                        {
                           if(age>=30)
                              printf("Eligible for Bonus...");
                          else
                             printf("Not Eligible for Bonus...");
                        }
                        else
                                printf("\aInvalid Age...");
                    }
                     else
                            if(gen=='F' || gen=='f')
                            {
                                printf("Enter ur Age:");
                                scanf("%d",&age);
                                if(age>0 && age<=150)
                                {
                                  if(age>=25)
                                        printf("Eligible for Bonus..");
                                  else
                                        printf("Not Eligible for Bonus...");
                                }
                                else
                                        printf("\aInvalid Age...");
                            }
                            else
                                  printf("\aInvalid gender inputted..");
            }
            else
                    printf("\aInvalid Marital status...");
   return 0;
}

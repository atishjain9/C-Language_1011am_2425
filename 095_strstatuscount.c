# include <stdio.h>
int main()
{
    char str[50];
    int i,uc,lc,dc,sc;
    uc=lc=dc=sc=0;

    printf("Enter a ur Password:");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
             uc++;
        else
               if(str[i]>=97 && str[i]<=122)
                    lc++;
               else
                      if(str[i]>=48 && str[i]<=57)
                            dc++;
                      else
                             sc++;
    }

    printf("\nUpper case Letter are:%d",uc);
    printf("\nLower case Letter are:%d",lc);
    printf("\nNo of Digits are:%d",dc);
    printf("\nNo of Special Symbols are:%d",sc);

    printf("\n");
  return 0;
}

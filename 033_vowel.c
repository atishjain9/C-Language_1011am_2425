
# include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character...:");
    scanf("%c",&ch);

    if( ch>=65 && ch<=90 || ch>=97 && ch<=122 )
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            printf("%c is a Vowel...",ch);
        else
                if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                    printf("%c is a Vowel...",ch);
                else
                    printf("%c is a Consonant",ch);
    }
    else
            if(ch>=48 && ch<=57)
                printf("Its a Digit...Please input Alphabets...only");
            else
                    printf("\aInvalid input...");

   return 0;
}

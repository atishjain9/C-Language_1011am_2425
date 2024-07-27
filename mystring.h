//Function declarations....
int mystrlen(char[]);
int wcount(char s[]);
void strproper(char s[]);

//gloabl declarations
int i;

//Function Definitions

int mystrlen(char s[])
{
    int l=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
            l++;
    }
    printf("\n");
    return l;
 }


 int wcount(char s[])
 {
     int w=1;
     for(i=0;s[i]!='\0';i++)
     {
         if(s[i]==' ')
            w++;
     }
     printf("\n");
     return w;
 }


 void strproper(char s[])
 {
     if(s[0]>=97 && s[0]<=122)
        putchar(s[0]-32);
    else
        putchar(s[0]);

    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            putchar(s[i]);
            i++;
            if(s[i]>=97 && s[i]<=122)
                  putchar(s[i]-32);
            else
                putchar(s[i]);
        }
        else
        {
            if(s[i]>=65 && s[i]<=90)
                putchar(s[i]+32);
            else
                putchar(s[i]);
        }
    }
        printf("\n");
 }

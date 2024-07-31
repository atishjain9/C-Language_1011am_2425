# include <stdio.h>
int main()
{
    char fname[10],ch;

    FILE *fp;

    printf("Enter file name to open and read:");
    scanf("%s",&fname);

     fp=fopen(fname,"rt");

    if(fp==NULL)
    {
        puts("File is not Existing...");
        exit(0);
    }

    while( (ch=getc(fp))!=EOF)
    {
      putchar(ch);
      for(long long i=1;i<=1000000;i++);
    }

    printf("\n");
}


# include <stdio.h>
int main()
{
    char fname[10],ch;

    FILE *fp;

    printf("Enter file name(f6 or ctrl+z - to save):");
    scanf("%s",&fname);

     fp=fopen(fname,"rt");

    if(fp!=NULL)
    {
        puts("File is Already Existing...");
        exit(0);
    }

    fp=fopen(fname,"wt");

    printf("Enter file Contents...\n");
    printf("---------------------------\n");




    fflush(stdin);

    while( (ch=getchar())!=EOF)
    {
      putc(ch,fp);
    }
    printf("\n1 File is Saved..");

    printf("\n");
}


# include <stdio.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    char ch;

    if(argc>2)
    {
        printf("\aToo Many File names....");
        exit(0);
    }

    if(argc<2)
    {
        printf("\aFile name is missing...");
        exit(0);
    }

    fp=fopen(argv[1],"rt");
    if(fp!=NULL)
    {
        puts("File is Already existing...");
        exit(0);
    }

    fp=fopen(argv[1],"wt");

    while( (ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }

    printf("\n1 File(s) Created....");


  printf("\n");
}







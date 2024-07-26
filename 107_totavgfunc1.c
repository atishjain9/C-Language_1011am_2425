# include <stdio.h>
int main()
{
    void calctotavg(int,int,int);


    int m,p,c;
    float tot,avg;

    m=p=c=tot=avg=0;

    printf("Enter Marks of 3 subjects...:");
    scanf("%d%d%d",&m,&p,&c);

    calctotavg(m,p,c);
    printf("\n");
    return 0;
}

void calctotavg(int x,int y,int z)
{
    float t;
    t=x+y+z;
    printf("\nTotal is:%f",t);
    printf("\nAverage is:%f",t/3);
}





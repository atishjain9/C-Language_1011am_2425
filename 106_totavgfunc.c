# include <stdio.h>
int main()
{
    float calctot(int,int,int);
    float calcavg(float);

    int m,p,c;
    float tot,avg;

    m=p=c=tot=avg=0;

    printf("Enter Marks of 3 subjects...:");
    scanf("%d%d%d",&m,&p,&c);

    tot=calctot(m,p,c);
    avg=calcavg(tot);

    printf("Total is:%f",tot);
    printf("\nAverage is:%f",avg);

    printf("\n");
    return 0;
}

float calctot(int x,int y,int z)
{
      return x+y+z;
}
float calcavg(float a)
{
    return a/3;
}





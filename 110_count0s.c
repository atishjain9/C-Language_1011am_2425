# include <stdio.h>
int main()
{
    int countzeors(long long);
    long long mno;
    int count=0;

    printf("Enter ur valid mobile no:");
    scanf("%lld",&mno);

    count=countzeros(mno);

    printf("No of Zeros in the mobile no are:%d",count);

    printf("\n");
    return 0;
}

int countzeros(long long x)
{
    int r,c=0;

    while(x!=0)
    {
        r=x%10;
        if(r==0)
            c++;

        x=x/10;
    }
    return c;

}






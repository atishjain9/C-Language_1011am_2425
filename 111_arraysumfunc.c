# include <stdio.h>

int i; //global declaration
int main()
{
    int arrsum(int[]);
    int arr[10],sum=0;

    for(i=0;i<10;i++)
    {
        printf("Enter %d no...:",i+1);
        scanf("%d",&arr[i]);
    }

    sum=arrsum(arr);
    printf("Sum of 10 array elements is:%d",sum);

    printf("\n");
    return 0;
}

int arrsum(int x[])
{
    int s=0;
    for(i=0;i<10;i++)
    {
        s=s+x[i];
    }
    return s;
}






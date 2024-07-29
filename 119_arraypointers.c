# include <stdio.h>
int i;
int main()
{
    void display(int*);
    int arr[10];


    for(i=0;i<10;i++)
    {
        printf("Enter %d no:",i+1);
        scanf("%d",&arr[i]);
    }

    display(arr); //&arr[0] or &arr

    printf("\n");
    return 0;
}

void display(int *x)
{
    for(i=0;i<10;i++)
    {
        printf("\n%u - %d",x+i,*(x+i));
    }
}

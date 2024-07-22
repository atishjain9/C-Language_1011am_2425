#  include <stdio.h>
int main()
{
    int a[100],i,size;

    printf("\nArrays size is:%d",sizeof(a));
    printf("\nEnter how many elements you want to read(1-100):");
    scanf("%d",&size);

    if(size<=0 || size>100)
    {
        printf("\nInvalid array size...");
        exit(0);
    }

    for(i=0;i<size;i++)
    {
     printf("Enter %d no:",i+1);
     scanf("%d",&a[i]);
    }

    for(i=size-1;i>=0;i--)
        printf("\n%d - %d",i,a[i]);


 printf("\n");
 return 0;
}

#  include <stdio.h>
int main()
{
    int a[100],i,size,sum=0;

    printf("\nArrays size is:%d",sizeof(a));
    printf("\nEnter how many elements you want to read(1-100):");
    scanf("%d",&size);

    if(size<=0 || size>100)
    {
        printf("\nInvalid array size...");
        exit(0);
    }
   //reading array elements
    for(i=0;i<size;i++)
    {
     printf("Enter %d no:",i+1);
     scanf("%d",&a[i]);
    }
    //calculating sum
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }

    for(i=0;i<size;i++) //5
    {
        if(i<size-1)
        printf("%d+",a[i]);
       else
        printf("%d=",a[i]);
    }
    printf("%d",sum);

   printf("\n");
  return 0;
}

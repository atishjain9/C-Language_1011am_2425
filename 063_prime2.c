#  include <stdio.h>
int main()
{
    int no,d,count=0;
    d=2;

    printf("Enter a no:");
    scanf("%d",&no);

    //prime no checking logic
    while(d<no)
    {
        count++;
        if(no%d==0)
        {
            break;
        }
        d++;
    }



    if(d==no)
    {
        printf("%d is Prime...",no);
        printf("\nNo Of iterations are:%d",count);
    }
    else
     {
       printf("%d is not Prime...",no);
       printf("\nNo Of iterations are:%d",count);
     }
   return 0;
}
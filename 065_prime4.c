#  include <stdio.h>
# include <math.h>
int main()
{
    int no,d,count=0;
    d=2;
    char isprime='y';

    printf("Enter a no:");
    scanf("%d",&no);

    //prime no checking logic
    while(d<=(sqrt(no)))
    {
        count++;
        if(no%d==0)
        {
            isprime='n';
            break;
        }
        d++;
    }

    if(isprime=='y')
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

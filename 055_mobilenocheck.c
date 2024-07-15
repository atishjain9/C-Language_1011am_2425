#  include <stdio.h>
int main()
{
   long long int mno,temp;
   int d=0;

   printf("Enter u Mobile no:");
   scanf("%lld",&mno);

   temp=mno;

   while(mno!=0)
   {
       mno=mno/10;
       d++;
   }

   mno=temp;

   if(d!=10)
        printf("%lld is Invalid...becuase it has %d Digits....only",mno,d);
   else
        printf("%lld is Valid....",mno);



   return 0;
}

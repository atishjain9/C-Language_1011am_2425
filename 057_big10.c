#  include <stdio.h>
int main()
{
   int no,c,big=0;

for(c=1;c<=10;c++)
{
   printf("Enter %d no:",c);
   scanf("%d",&no);

   if(no>big)
     big=no;
}

printf("Biggest of 10 numbers is:%d",big);




   return 0;
}

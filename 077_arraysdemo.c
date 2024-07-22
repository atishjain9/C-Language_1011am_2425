#  include <stdio.h>
int main()
{
    int arr[10]={0};
    int i;

    arr[4]=100;
    arr[9]=900;

   printf("Array size:%d",sizeof(arr));
    for(i=0;i<10;i++)
         printf("\n%d",arr[i]);

 printf("\n");
 return 0;
}

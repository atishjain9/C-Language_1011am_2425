# include <stdio.h>
int main() //calling function
{
    display(1); //function call
    printf("\n");
    return 0;
}

display(int x)
{
    if(x>100)
        return;
    else
    {
        printf("\t%d",x);
        display(++x); //recursion
    }
}








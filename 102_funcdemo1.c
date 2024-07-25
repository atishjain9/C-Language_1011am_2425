# include <stdio.h>

int main()
{
    void heading(void); //function declaration / prototype

    printf("\ncontrol Enters into Main function.....");
    heading(); //function calling / invocation
    printf("\nreturned back to main function....");

    printf("\n");
    return 0;
}

//function definition
void heading(void)
{
    printf("\n--------------------------------");
	printf("\ncontrol entered into heading function...\n");
    printf("AH CAREER ACADEMY\n");
    printf("Danavaipeth\n");
    printf("Rajahmundry - Hyderabad\n");
    printf("---------------------------------");
    printf("\ncontrol returning back from heading function to main()");

	return;
}


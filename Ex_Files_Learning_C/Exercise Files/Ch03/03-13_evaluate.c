#include <stdio.h>\

void evaluate(int x);

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
	/* if(x < 10)
        printf("The value %d is less than 10.\n",x);
    else if(x > 10)
        printf("The value %d is greater than 10.\n",x);
    else
        printf("The value passed is %d.\n",x);
 */
	if(x < 10)
		printf("The value of X is smaller than 10");
	else if (x == 10) 
		printf("The value of X is equal to 10");
	else if (x > 10)
		printf("The value X is greater than 10");
	else 
		printf("Wrong type input");

}


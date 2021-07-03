#include <stdio.h>
#include <stdlib.h>

#define SIZE 64
int main ()
{
    char *userInputName;

    
    userInputName = malloc(sizeof(char)*SIZE);

	if( userInputName == NULL)
	{
		puts("Unable to allocate memory");
		return(1);
	} 
    else {
        printf("Enter your name: ");
        fgets(userInputName,SIZE,stdin);
        printf("Please nice to meet you: %s", userInputName);
    }

    


    return(1);

}
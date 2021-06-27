#include<stdio.h>
#include<string.h>

int main() 
{
    char firstName[25];          //first name Length 23 character + node
    char lastName[25];          // last name length 23 character + node
    char buffer[64];            

    printf("Your name: ");
    fgets(firstName,25,stdin);
    printf("Your Last Name: ");
    fgets(lastName,25,stdin);

    strcpy(buffer,firstName);
    strcat(buffer,lastName);
    
    printf("Your name is:%s ", buffer);
   
   return(0);

    


}

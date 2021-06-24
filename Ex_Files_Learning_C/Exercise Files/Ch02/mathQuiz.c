#include<stdio.h>
#include<math.h>

int main ()
{
    float a;
    float b;
    float p;

    printf("Type your first float: ");
    scanf("%f", &a);
    printf("Type your second float: ");
    scanf("%f", &b);
    printf("Here are the results: %f %f %f %f %f %f %f", a+b,a-b,a*b,a/b,sqrt(a), sqrt(b), pow(a,b) );


    
    

    return(0);


}
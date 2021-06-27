#include<stdio.h>

int main (){

    int x;
    int y = -10;
    
    for(x=0;x<20;x++)
        printf("%d \n", x+1);
    
    
    while(y <= 10) {
        printf("%d \n", y);
        y = y + 2;
    }
    
    return(0);



}
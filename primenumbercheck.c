/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number, loop;
    printf("Enter a number to check: ");
    scanf("%d", &number);
    int prime = 1;
    for (loop = 2; loop < number; loop++){
        if( number%loop == 0){
            prime = 0;
        }
    }
    if( prime == 0 ){
        printf(" Not prime. \n");
    } else {
        printf(" Prime\n ");
    }
    
    return 0;
}

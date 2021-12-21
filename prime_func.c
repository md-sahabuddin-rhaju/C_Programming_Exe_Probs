/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int num;
int check = 10;
int main(){
    
    scanf("%d", &num);
    for (int i = 2; i< num/2; i++){
        if (num%i == 0){
            check = 1;
            break;
        } else {
            check = 0;
        }
    }
    
if (check == 1){
    printf(" The given number %d is not prime.\n", num);
} 
if (check == 0){
    printf(" The given number %d is prime.\n", num);
}
return 0;
}

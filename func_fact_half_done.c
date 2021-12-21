/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fact(int n);
int main()
{
    int a;
    int fac = 0;
    printf("ENter aa number to find it's factorial: ");
    scanf("%d", &a);
    fac = fact(a);
    printf("The factorial of %d is %d\n",a, fac);

    return 0;
}
int fact(int n){
    if(n == 0){
        return 1;
    } else {
        return n * (n - 1);
    }
}

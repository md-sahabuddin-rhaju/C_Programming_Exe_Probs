#include<stdio.h>

int swap(int num1, int num2);

int main(){
    int a = 100;
    int b = 200;
    printf("Before swapping a is %d\n", a);
    printf("Before swapping b is %d\n", b);
    swap(a, b);
    printf("after swapping a is %d\n", a);
    printf("after swapping b is %d\n", b);
    return 0;
    
}

int swap(int num1, int num2){
    int temp;
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    return;
}
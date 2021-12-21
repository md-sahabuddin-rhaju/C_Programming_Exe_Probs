#include <stdio.h>
int count;

void func1(void);
void func2(void);

int main(void){
    int count = 1 00;
    func1();

    return 0;
}

void func1(void){
    int temp;
    temp = count;
    func2();
    printf("\n count is %d\n", count);

}

void func2(void){
    int count;
    for(count; count<10; count++)
        putchar('.');
}

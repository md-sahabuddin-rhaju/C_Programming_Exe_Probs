#include<stdio.h>
int main(){
    int a = 10;
    int b = 22;
    int c;
    
    printf("The value of a in main() %d\n", a);
    c = sum(a, b);
    printf("The value of c in main() %d\n", c);
    return 0;
}
int sum(int x, int y){
    printf("The value of a in func %d\n",x);
    printf("The value of b in func %d\n",y);
    return x + y;
}
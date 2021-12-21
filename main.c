#include <stdio.h>
int natural_sum(n);
int recur_nat_num(int n1);
int main()
{
    int num, s, s1, swich;
    printf("Enter the num, you want to sum up to that \n");
    scanf("%d",&num);
    printf("Enter 1 for func_sum & 2 for recusive sum.\n");
    scanf("%d", &swich);
    if (swich == 1){
        s = natural_sum(num);
        printf("The total sum is: %d\n", s);
    }
    else if (swich == 2){
        s1 = recur_nat_num(num);
        printf("The toal sum is: %d\n", s1);
    }
    else {
        printf("Invalid, please choose 1 or 2.");
    }
    
    return 0;
}

int natural_sum( int n){
    int i=0, sum= 0;
    while(i <= n){
        sum += i;
        i++;
    }
    return sum;
}
int recur_nat_num(int n1){
    if (n1 == 1){
        return 1;
    }
    else {
        return n1 * recur_nat_num(n1-1);
    }
}


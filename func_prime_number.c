#include <stdio.h>
int prime_number(int n);
int main()
{
    int i, n1, n2, num, flag=0;
    printf("Enter two positive integer to check prime between them. \n");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1; i <= n2; ++i)
    
    {
        flag = prime_number(i);
        
        if (flag == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

int prime_number(int n){
    int j, flag=1;
    for (j = 2; j <n/2; j++){
        if(n%j == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

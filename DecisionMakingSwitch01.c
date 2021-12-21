#include<stdio.h>
int main()
{
    char grade = 'B';

    switch(grade){
        case 'A':
            printf("Excellent.\n");
            break;
        case 'B':
            printf("Satisfactory.\n");
            break;
        case 'C':
            printf("Need more improvement");
            break;
        case 'D':
            printf("Try hard.\n");
            break;
        case 'F':
            printf("Try again.\n");
            break;
        default:
            printf("Invalid input.\n");
    }
    printf("Your grade is %c\n", grade);
    return (0);
}


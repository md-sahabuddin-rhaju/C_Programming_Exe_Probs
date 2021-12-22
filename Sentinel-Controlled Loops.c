#include <stdio.h>

int main()
{
    int grade, count=0, sum = 0;
    char nChar = 'Y';
    printf("Enter a mark: ");

    
    while (nChar == 'Y'){
        printf("The value of grade is: \n" );
        scanf("%d", &grade);
    
        sum += grade;
        getchar();
        count++;
        printf("Enter your conformation: 'Y/N':  ");
        scanf("%c", &nChar);
  
    }
    double avg = (float) sum / count ; 
    printf(" The average of your grade is: %.2f \n", avg);

    return 0;
}
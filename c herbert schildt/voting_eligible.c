/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
  int vote_age;
  scanf("%d", &vote_age);
  
  if (vote_age >= 18){
    printf("congo");
  }
  else {
    printf("sorry come after %d\n", 18-vote_age);
  }
}

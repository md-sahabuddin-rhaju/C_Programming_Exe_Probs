/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a;
  printf ("Enter a number to find factorial: ");
  scanf ("%d", &a);
  int fact = 1;
  int i = a;
  for (i; i > 0; i--)
    {
      fact *= i;
    }
  printf ("The factorial of %d is %d\n", a, fact);

  return 0;
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

=======
 * main - Prints a random number and states whether
 *          it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
>>>>>>> 2e4dab8c327a086acdabb76f9423be9566d3cdd9
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

<<<<<<< HEAD
if (n==0)
{
printf("%i is zero\n", n);
}

else if (n<0)
{printf("%i is negative\n", n);
}

else
{
printf("%i is positive\n", n);
}

return (0);

}

=======
if (n > 1)
  printf("%d is positive\n", n);
 else if (n < 0)
   printf("%d is negative\n", n);
 else

   printf("%d is zero\n", n);

   return (0);
}
>>>>>>> 2e4dab8c327a086acdabb76f9423be9566d3cdd9

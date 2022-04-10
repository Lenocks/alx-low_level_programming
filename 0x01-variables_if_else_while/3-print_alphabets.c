#include <stdlib.h>
#include <time.h>
#include <studio.h>
/**
 * main - Entry point
 *
 * Reeturn: Always 0 (Success/correct)
 */
int main(void)

{
char lower_case;
char upper_case;

for (upper_case = 'A'; upper_case <= 'z'; upper_case++)
{
putchar(upper_case);
}

for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
putchar(lower_case);
}

putchar('\n');

return (0);

}

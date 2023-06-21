#include "main.h"

/*
 * times_table - Prints the 9 times table
 *
 * Description:
 * This function prints the multiplication table for the numbers 0 to 9.
 * Each row represents a number,
 * and each column represents the product of that number
 * multiplied by the column index.
 */
void times_table(void)
{
int num, mult, prod;

for (num = 0; num <= 9; num++)
{
_putchar(48); /* Print the initial '0' character */
for (mult = 1; mult <= 9; mult++)
{
_putchar(','); /* Print the comma separator */
_putchar(' '); /* Print the space separator */

prod = num * mult;

/*
 * If the product is a single digit, print an additional space
 * before the number to align the columns.
 */
if (prod <= 9)
_putchar(' ');

_putchar((prod / 10) + 48); /* Print the first digit of the product */
_putchar((prod % 10) + 48); /* Print the second digit of the product */
}
_putchar('\n'); /* Move to the next line after each row */
}
}

#include "main.h"
#include <stdio.h>

/**
 * add - Adds two integers and returns
 * the result.
 *
 * @a: number one.
 * @b: number two.
 *
 * Return: Add of number one and number two.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
int add(int a, int b)
{
	return (a + b);
}
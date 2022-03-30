#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter
 * Return: if n does not have a natural square root, return -1
 * else if have a natural square root, return this natural square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (_sqrt(n, root));
}

/**
 * _sqrt - finds the natural square root of n
 * @num: number
 * @root: root to tested
 * Return: if n does not have a natural square root, return -1
 * else if have a natural square root, return this natural square root
 */

int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (_sqrt(num, root + 1));
}

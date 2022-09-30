 #include "main.h"

int get_sqrt(int r_num, int sqrt_root);
int _sqrt_recursion(int n);


/**
 * get_sqrt - get sqaure root for a natural num
 * @r_num: number to find root of
 *@sqrt_root: the root
 *Return: n if it is natural num else -1 
 */

int get_sqrt(int r_num, int sqrt_root)
{
	if ((sqrt_root * sqrt_root) == r_num)
		return (sqrt_root);
	if (sqrt_root == r_num / 2)
		return (-1);
	return (get_sqrt(r_num, sqrt_root + 1));
}

/**
 * _sqrt_recursion - return the root of a number
 * @n: the number that return the root
 * Return: n if it is a natural number or -1 if not
 */

int _sqrt_recursion(int n)
{
	int sqrt_root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (get_sqrt(n, sqrt_root));
}

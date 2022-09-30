 #include "main.h"

int get_sqrt(int r_num, int sqrt_root);
int _sqrt_recursion(int n);

/**
 * get_sqrt - find the natural square of a number
 * @x_num: The number to find the root for
 * @root: the root
 * Return: n if it is a square roor, -1 if not
 */

int get_sqrt(int x_num, int root)
{
	if ((root * root) == x_num)
	{
		return (root);
	}
	if (root == x_num / 2)
		return (-1);

	return (get_sqrt(x_num, root + 1));
}

/**
 * _sqrt_recursion - return natural square roo
 * @n: the number to return the root
 * Return: n if natural sqaure, -1 if not
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	
	return (get_sqrt(n, root));

}

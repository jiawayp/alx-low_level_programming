#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prototype for function
 * @n: integer
 *
 * Description: print all number up to 98
 *
 *Return: void (nothing)
 */

 void print_to_98(int n)
 {
	 n = 0;

	 for (n = 0; n < 98; n++)
	 {
		 if (n <= 98)
		 {
			 printf("%d, ", n);
		 }
		 else if (n > 98)
		 {
			 printf("%d, ", n);
			 n--;
		 }
	 }
	 printf("98\n");
 }

#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable type struct dog
 * @d: pointer to the element of dog
 * @name: point to the name of dog
 * @age: age of dog
 * @owner: point to the owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char owner)
{
	if (d == NULL)
		;
	else
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}

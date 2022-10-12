#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: pointer to dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if(d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else if(d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

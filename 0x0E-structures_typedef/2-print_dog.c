#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: a pointer to the dog's struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
/* PENDING for printf project :ups different type: float an string*/
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

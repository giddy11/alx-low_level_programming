#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *dog;
	char *name_copy, *owner_copy;

	dog = malloc(sizeof(dog));

	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	name_copy = malloc(sizeof(char) * i + 1);

	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = malloc(sizeof(char) * j + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		name_copy[k] = name[k];
	for (k = 0; k <= j; k++)
		owner_copy[k] = owner[k];

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}

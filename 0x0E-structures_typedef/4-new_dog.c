#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
* new_dog - creates a new dog
* @name: first
* @age: second
* @owner: third
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, len = 0, len2 = 0, j = 0;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	while (name[i] == '\0')
	{
		len++;
		i++;
	}
	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	(*new_dog).name = (char *)malloc(len + 1);
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy((*new_dog).name, name);
	while (owner[j] == '\0')
	{
		len2++;
		j++;
	}
	(*new_dog).owner = (char *)malloc(len2 + 1);
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
	strcpy((*new_dog).owner, owner);
	(*new_dog).age = age;
	free((*new_dog).owner);
	return (new_dog);
}

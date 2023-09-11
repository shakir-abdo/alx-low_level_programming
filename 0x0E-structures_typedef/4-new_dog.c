#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of string
 * @s: the string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_strcpy - copies string pointed
 * @src: string to copy
 * @dest: the pointer to the buffer which we copy the string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, len;
	
	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name:the  name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 * Return: pointer to the new dog or, NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	
	int gg1, gg2;

	gg1 = _strlen(name);
	gg2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (gg1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (gg2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - find length of a string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && s[len])
		len++;
	return (len);
}
/**
 * _strcpy - copy a string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog_t, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len_name, len_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	ndog->name = malloc(sizeof(char) * (len_name + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->name, name);

	ndog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->owner, owner);

	ndog->age = age;

	return (ndog);
}


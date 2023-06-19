#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _strlen - calculate the lenght of a string
 * @s: the string
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies the string
 * @src: the string in question
 * @d: the pointer
 * Return: returns the pointer
 */
char *_strcpy(char *d, char *src)
{
	int i;
	int lenght;

	lenght = 0;

	while (src[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; i <= lenght; i++)
	{
		d[i] = src[i];
	}
	d[i] = '\0';

	return (d);
}
/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: returns a pointer to he new dog is (SUCCESS), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
		int len1, len2;


		len1 = _strlen(name);
		len2 = _strlen(owner);


		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);


		dog->name = malloc(sizeof(char) * (len1 + 1));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * (len2 + 1));
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

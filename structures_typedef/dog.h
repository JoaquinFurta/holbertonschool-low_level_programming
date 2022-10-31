#ifndef dogg
#define dogg

/**
 * struct dog - dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores data about dogs
 * @name: string - dog name
 * @age: float - dog's age
 * @owner: string - name of owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores data about dogs
 * @name: string - dog name
 * @age: float - dog's age
 * @owner: string - name of owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

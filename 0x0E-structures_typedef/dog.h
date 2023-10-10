#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: 1st args char
 * @age: 2nd args int
 * @owner: 3rd args char
 *
 * Description: defining named dog with three arguments: name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/

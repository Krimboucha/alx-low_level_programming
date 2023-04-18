#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - creates dogs ig
 * @name: dog's name
 * @age:  dog's age
 * @owner:  dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to the dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

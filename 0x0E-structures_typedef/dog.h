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

/**
  * print_dog - prints a dog struct
  * @d: dog structure
  *
  * Return: void
  */

void print_dog(struct dog *d);
typedef struct dog dog_t;
/**
 * new_dog - creates a new dog
 * @name: of dog's name
 * @age: of dog's age
 * @owner: dog's owner
 * Return: pointer to a dog structure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees dog
 * @d: pointer to dog structure
 */

void free_dog(dog_t *d);
#endif

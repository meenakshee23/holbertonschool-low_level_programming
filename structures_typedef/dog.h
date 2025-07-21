#ifndef DOG_H
#define DOG_H
/**
 * struct dog - information about a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: this struct defines a dog with a name, age,
 * and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 *
 * Description: dog_t is a new name for the type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif


#ifndef DOG
#define DOG
/**
 * struct dog - the structure for a dog :)
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the owner
 *
 * struct dog - this structure is a basic header for the next points for dogs
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

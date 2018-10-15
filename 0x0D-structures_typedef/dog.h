#ifndef doge
#define doge
/**
 * struct dog - a structure of the attributes of dogs
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	double age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
#endif

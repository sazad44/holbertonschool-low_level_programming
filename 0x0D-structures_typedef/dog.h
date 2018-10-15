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

typedef struct dog Dog;

void init_dog(Dog *d, char *name, float age, char *owner);
#endif

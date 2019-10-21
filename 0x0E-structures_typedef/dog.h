#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Struct
 * @name: member
 * @age: member
 * @owner: member
 * Description: Define a new type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

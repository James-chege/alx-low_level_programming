#ifndef DOG_H
#define DOG_H
/**
* struct dog - a new type: struct dog with the following elements
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
* Description: a struct that houses a string and a float
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif /*DOG_H*/

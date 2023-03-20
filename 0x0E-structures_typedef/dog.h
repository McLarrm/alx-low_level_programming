#ifndef DOGH
#define DOGH

/**
 * struct dog - Dog
 * @name: Dog's name
 * @age: Age
 * @owner: The owner
 * Return: 0
 */
typedef struct dog
{
	char *name, owner;
	float age;
}dog;
typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

int _putchar(char c);

#endif

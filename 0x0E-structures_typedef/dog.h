#ifndef DOG
#define DOG

/**
 * dog - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - structure for a dog object
 * @name: name member
 * @age: age memeber
 * @owner: owner member
 * Description: structure called "dog" that stores the name, age and
 *              the name of its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*#ifndef DOG*/

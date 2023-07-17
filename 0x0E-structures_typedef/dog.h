#include <stdio.h>
#ifndef DOG
#define DOG
typedef struct dog
{
char *name;
float age;
char *owner;
}
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

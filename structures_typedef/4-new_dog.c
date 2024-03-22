#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner) {
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL) {
return NULL;
}

new_dog->name = malloc(strlen(name) + 1);
if (new_dog->name == NULL) {
free(new_dog);
return NULL;
}
strncpy(new_dog->name, name, strlen(name) + 1);  // Using strncpy instead of strcpy

new_dog->age = age;

new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL) {
free(new_dog->name);
free(new_dog);
return NULL;
}
strncpy(new_dog->owner, owner, strlen(owner) + 1);  // Using strncpy instead of strcpy

return new_dog;
}


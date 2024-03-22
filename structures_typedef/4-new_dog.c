#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner) {
    int name_length = 0;
    int owner_length = 0;
    int i;

    while (name[name_length] != '\0') {
        name_length++;
    }

    while (owner[owner_length] != '\0') {
        owner_length++;
    }

    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL) {
        return NULL;
    }

    new_dog->name = malloc(name_length + 1);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }

    for (i = 0; i <= name_length; i++) {
        new_dog->name[i] = name[i];
    }

    new_dog->age = age;

    new_dog->owner = malloc(owner_length + 1);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }

    for (i = 0; i <= owner_length; i++) {
        new_dog->owner[i] = owner[i];
    }

    return new_dog;
}


#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    // Check if size is 0
    if (size == 0) {
        return NULL;
    }

    // Allocate memory for the array
    char *array = (char *)malloc(size * sizeof(char));

    // Check if memory allocation failed
    if (array == NULL) {
        return NULL;
    }

    // Initialize the array with the specified char
    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}

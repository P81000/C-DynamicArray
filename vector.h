#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 256
#define append(xs, x)\
    do {\
        if (xs.count >= xs.capacity) {\
            if (xs.capacity == 0) xs.capacity = MAX_SIZE;\
            xs.items = realloc(xs.items, xs.capacity * sizeof(*xs.items));\
        }\
        xs.items[xs.count++] = x;\
    } while (0)

#define dealloc(xs)\
    do {\
        free(xs.items);\
        xs.items = NULL;\
        xs.count = 0;\
        xs.capacity = 0;\
    } while (0)

/* Generic Type */
#define Vector(type) typedef struct {\
    type* items;\
    size_t count;\
    size_t capacity;\
} Vector_##type;

/* Static Type */
typedef struct {
    int* items;
    size_t count;
    size_t capacity;
} Int;

typedef struct {
    float* items;
    size_t count;
    size_t capacity;
} Float;

typedef struct {
    char* items;
    size_t count;
    size_t capacity;
} Char;


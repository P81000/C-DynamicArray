#include "vector.h"
#include <stdint.h>

/* Sample */
typedef struct {
    uint8_t lat;
    uint8_t lng;
} coordinates;
Vector(coordinates);
//
Vector(uint8_t);
/* ------ */

int main(void) {
    /* Static Types */
    printf("Int: ");
    Int nums = {0};
    for (int i = 0; i < 5; ++i) append(nums, i);
    for (size_t i = 0; i < nums.count; ++i) printf("%d ", nums.items[i]);
    dealloc(nums);

    printf("\n");

    printf("Float: ");
    Float ns = {0};
    for (int i = 0; i < 5; ++i) append(ns, i);
    for (size_t i = 0; i < ns.count; ++i) printf("%f ", ns.items[i]);
    dealloc(ns);

    printf("\n");

    printf("Char: ");
    Char c = {0};
    for (int i = 65; i < 70; ++i) append(c, i);
    for (size_t i = 0; i < c.count; ++i) printf("%c ", c.items[i]);
    dealloc(c);

    printf("\n");

    /* Generic Type */
    printf("Generic type uint8_t: ");
    Vector_uint8_t numbers = {0};
    for (int i = 0; i < 5; ++i) append(numbers, i);
    for (size_t i = 0; i < numbers.count; ++i) printf("%hhd ", numbers.items[i]);
    dealloc(numbers);

    printf("\n");

    printf("Generic Type struct: \n");
    Vector_coordinates coord = {0};
    coordinates coordinate = {0};
    for (int i = 0; i < 5; ++i) {
        coordinate.lat = i;
        coordinate.lng = i*2;
        append(coord, coordinate);
    }
    for (int i = 0; i < coord.count; ++i) printf("%d: %d %d\n", i+1, coord.items[i].lat, coord.items[i].lng);
    dealloc(coord);

    return 0;
}

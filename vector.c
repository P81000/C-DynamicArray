#include "vector.h"

int main(void) {
    Int nums = {0};
    for (int i = 0; i < 10; ++i) append(nums, i);
    for (size_t i = 0; i < nums.count; ++i) printf("%d\n", nums.items[i]);
    dealloc(nums);

    Float ns = {0};
    for (int i = 0; i < 10; ++i) append(ns, i);
    for (size_t i = 0; i < ns.count; ++i) printf("%f\n", ns.items[i]);
    dealloc(ns);

    Char c = {0};
    for (int i = 65; i < 75; ++i) append(c, i);
    for (size_t i = 0; i < c.count; ++i) printf("%c\n", c.items[i]);
    dealloc(c);
    return 0;
}

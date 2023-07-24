#include "main.h"
/**
* Helper function to print a pointer
*/
static int print_pointer(const void *ptr) {
    int count = 0;
    uintptr_t ptrValue = (uintptr_t)ptr;

    count += print_char('0');
    count += print_char('x');

    char buffer[16];
    int index = 14;
    buffer[15] = '\0';
    do {
        int remainder = ptrValue % 16;
        buffer[index] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'a');
        ptrValue /= 16;
        index--;
    } while (ptrValue > 0);

    count += print_string(buffer + index + 1);

    return count;
}

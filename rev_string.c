#include "main.h"

int rev_string(char *str) {
  int len;
  int count;
  char temp;
  char *end;
    if (!str)
        return 0;

    len = 0;
    *end = str;

    while (*end != '\0') {
        len++;
        end++;
    }

    end--;
    count = 0;
    while (str < end) {
        temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
        count += 2;
    }

    return count + len;
}

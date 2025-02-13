#include "transformation.h"

int is_digit(char c) {
    return c >= '0' && c <= '9';
}

transformation string_to_long(const char *str) {
    transformation result;
    result.result = 0;
    result.error[0] = '\0';

    int sign = 1;
    int i = 0;


    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }


    for (; str[i] != '\0'; i++) {
        if (!is_digit(str[i])) {
            char *error_msg = "Invalid input string";
            for (int j = 0; error_msg[j] != '\0'; j++) {
                result.error[j] = error_msg[j];
            }
            result.result = 0;
            return result;
        }

        result.result = result.result * 10 + (str[i] - '0');
    }

    result.result *= sign;
    return result;
}



#include <stdio.h>
#include "transformation.h"

int main() {

    transformation result1 = string_to_long("-123");
    printf("%d\n", result1.result);
    transformation result2 = string_to_long("-12ab3");
    printf("%d\n", result2.result);
    return 0;
}




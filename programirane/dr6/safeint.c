#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "safeint.h"

SafeResult safeadd(int a, int b){
    SafeResult result;
    long temp = (long)a + (long)b;

    if(temp > INT_MAX || temp < INT_MIN){
        result.error = 1;
    }else{
        result.error = 0;
        result.value = (int)temp;
    }
    return result;
}

SafeResult safesubtract(int a, int b){
    SafeResult result;
    long temp = (long)a - (long)b;
    if(temp > INT_MAX || temp < INT_MIN){
        result.error = 1;
    }else{
        result.error = 0;
        result.value = (int)temp;
    }
    return result;
}

SafeResult safemultiply(int a, int b){
    SafeResult result;
    long temp = (long)a * (long)b;
    if(temp > INT_MAX || temp < INT_MIN){
        result.error = 1;
    }else{
        result.error = 0;
        result.value = (int)temp;
    }

    return result;
}

SafeResult safedivide(int a, int b){
    SafeResult result;
    if(b == 0){
        result.error = 1;
    }else{
        result.error = 0;
        result.value = a/b;
    }
    return result;
}

SafeResult safestrtoint(char *str) {
    SafeResult result;
    long temp = atol(str);

    if (temp > INT_MAX || temp < INT_MIN) {
        result.error = 1;
    } else {
        result.error = 0;
        result.value = (int)temp;
    }
    return result;
}
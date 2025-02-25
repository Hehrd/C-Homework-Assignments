#ifndef SAFEINT_H
#define SAFEINT_H

typedef struct {
    int value;
    int error;
}SafeResult;

SafeResult safeadd(int a, int b);
SafeResult safesubtract(int a, int b);
SafeResult safemultiply(int a, int b);
SafeResult safedivide(int a, int b);
SafeResult safestrtoint(char *str);

#endif
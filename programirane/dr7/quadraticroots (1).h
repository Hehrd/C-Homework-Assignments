#ifndef QUADRATICROOTS
#define QUADRATICROOTS

typedef struct {
    double x1;
    double x2;
    int norealroots;
} QuadraticRootsResult;

QuadraticRootsResult findroots(long double a, long double b, long double c);

#endif

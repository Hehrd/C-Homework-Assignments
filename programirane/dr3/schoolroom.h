#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

struct SchoolRoom {
    int roomNumber;
    struct Person occupants[50];
};

#endif

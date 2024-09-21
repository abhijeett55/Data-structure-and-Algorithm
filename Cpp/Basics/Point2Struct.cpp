#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle r = {10,5};
    struct Rectangle *p = &r;

    r.length = 15;
    (*p).length = 20;

    p ->length = 20;
    p ->breadth = 20;
}

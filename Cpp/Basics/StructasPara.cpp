#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int area (struct Rectangle & r) {
    return r.length * r.breadth;
};

void changeLength (struct Rectangle *p, int l) {
    p -> length = l;
}
int main() {
    struct Rectangle r = {10,5};
    changeLength (&r, 20);
    cout << area (r) <<endl;
    cout << r.length << endl;
}
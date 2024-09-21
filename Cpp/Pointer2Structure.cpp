#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main () {
    struct Rectangle r = {10,15};
    cout << r.length << endl;
    cout << r.breadth << endl;


    Rectangle  *p;
    p = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    p ->length = 19;
    p ->breadth = 7;
    cout << p-> length  << endl;
    cout << p-> breadth << endl;
    return 0;
}
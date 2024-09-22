#include <iostream>
using namespace std;

int area (int length, int breadth) {
    return length * breadth;
}

int peri (int length, int breadth) {
    int p;
    p = 2 * (length + breadth);
    return p;
}

int main() {
    
    cout << "Area is " << area  << " and is perimeter is " << peri << endl;
    return 0;
}
#include <iostream>

using namespace std;

class Rectangle {
    public :
    int length;
    int breadth;


void initialise (int l , int b) {
    length = l;
    breadth = b;
}

int area () {
    return length * breadth;
}

int peri () {
    int p;
    p = 2 * (length + breadth);
    return p;
}
};
int main() {
    Rectangle r;
    int l , b;
    cout << "Enter the Length and the Breadth : ";
    cin >> l >> b;
    r.initialise (l,b);
    int a = r.area ();
    int p  = r.peri();
    cout << "Area is " << a <<  " and perimeter is "  << p <<endl;
    return 0;
}
#include <iostream>
using namespace std;


struct Rectangle {
    int length;
    int breadth;
};

int area (struct Rectangle r) {
    return r.length * r.breadth;
}
int peri (struct Rectangle r) {
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}

int main() {
    Rectangle r = {0,0};
    int l ,b;
    cout << "Enter the Length and Breadth : " ;
    cin >> l  >> b ;

    int a = area(r);
    int p = peri(r);
    return 0;
}
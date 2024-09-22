#include <iostream>
using namespace std;

class Rectangle {
    private :
    int length;
    int breadth;

    public :
    void initialize (int l , int b) {
        length = l;
        breadth = b;
    }

    int area () {
        return length * breadth; 
    }
    void changeLength(int l) {
        length = l;
    }
};

int main() {
    Rectangle r;
    r.initialize (10,5);
    r.area ();
    r.changeLength(20);
}
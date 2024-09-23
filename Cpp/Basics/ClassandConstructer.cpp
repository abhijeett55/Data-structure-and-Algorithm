#include <iostream>
using namespace std;

class Rectangle {
    private:
    int length;
    int breadth;

    public : 
    Rectangle() {
        length = 0;
        breadth = 0;

    }
    Rectangle (int l , int b) {
        length = l;
        breadth = b;
    }

    int area () {
        return length * breadth;
    }

    int perimeter () {
        return 2 * (length + breadth);
    }

    void setLength (int l) {
        length = l;
    }

    void setBreadth (int b) {
        breadth = b;
    }

    int getLength () {
        return length;
    }

    int getBreadth () {
        return breadth;
    }
    ~Rectangle() {
        cout << "Desstructor";
    }
};


int main() {
    Rectangle r(10,3);
    cout << "Area of Rectangle " << r.area() << endl;
    cout << "Perimeter of Rectangle " << r.perimeter() << endl;
    return 0 ;
}
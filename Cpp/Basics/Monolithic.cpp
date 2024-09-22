#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int length = 0;
    int breadth = 0;
    cout << "Enter Length and Breadth " <<endl;
    cin>> length >> breadth ;
    int area = length * breadth;
    int peri = 2* (length + breadth);
    cout << "Area of Rectangle is " << area << " and Perimeter is  " << peri << endl;
    return 0;
}
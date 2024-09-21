#include <iostream>
using namespace std;


struct Rectangle { 
    int length;
    int breadth;
};

struct Complex
{
    int real;
    int img;
};


struct Student {
    int rollno ;
    char name [25];
    char dept[10];
    char adsresses[50];
};

struct Cards {
    int face;
    int shape;
    int color;
};

int main()  {
    struct Rectanhle r1 = {10,5};
    cout << "Hello World";
    cout << sizeof(r1);
    return 0;

}
#include <iostream>
using namespace std;

int add (int x , int y) {
    int a, b ,c;
    c = a + b;
    return c;
}

int main() {
    int x , y , z;
    x = 10;
    y = 15;
    z = add(x,y);
    cout << z << endl;

    int num1 = 12;
    int num2 = 15;
    int sum;
    sum = add (num1, num2);
    cout << "The Sum is " << sum;
    return 0;

}
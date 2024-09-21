#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int * ptr;
    // initialisation 
    ptr = &a; 
 
    cout << a << endl;

    // derefrencing 
    cout << *ptr << endl;

    int A [5] = {2,4,6,8,10};
    int * p;
    p = A;
    for (int i = 0; i < 5; i++) {
        cout << A [i] << endl;
    }
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    return 0;
}
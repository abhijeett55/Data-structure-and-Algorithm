#include <iostream>
using namespace std;

int main()  {
    int a = 10;
    int &r = a;
    cout << a << endl;
    r++;

    cout << r <<endl;
    cout << a << endl;
    cout << "Hello this  " << a << endl << r << endl;
    a = 25;
    cout << a << endl << r << endl;
    return 0;
}
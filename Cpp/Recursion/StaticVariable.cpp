#include <iostream>
using namespace std;

int fun (int n){
    if (n > 0) {
        return  fun(n -1)+n;
    }
    return 0;
}

int fun2 (int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return fun2(n-1) + n;
    }
    return 0;
}


int main() {
    int a = 5;
    cout << fun(a) << endl;
    int r;
    r = fun2(5);
    cout << r;
}
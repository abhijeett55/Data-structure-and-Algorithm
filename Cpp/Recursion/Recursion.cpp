#include <iostream>
using namespace std;

void fun (int n) {
    if (n > 0) {
        cout << n << ' ';

    }
    else{
        fun(n-1);
    }
}

int fun2 (int n) {
    if (n >0) {
        return fun2(n -1)+n;
    }
    return 0;
}

int fun1 (int n) {
    static int x = 0;
    if (x > 0) {
        x++;
    }
    else {
        return fun2(n-1)+x;
    }
}

int main () {
    int x = 3;
    int a = 5;
    cout << fun1(a);
    fun (x);
    return 0;
}
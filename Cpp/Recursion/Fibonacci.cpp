#include <iostream>
using namespace std;

int F[10];

int fib(int n) {
int t0 = 0, t1 =1 , s , i;
if (n <=1) {
    return n;
    }
    for (int i = 2; i <= 2; i++) {
        s = t0 + t1;
        t0 =t1;
        t1 = s;
    }
    return s;
}


int rfib(int n) {
    if (n >= 1) {
        return rfib(n -2) + rfib(n -1);
    }
}

int mfib(int n) {
    if (n <= 1) {
        F[n] = n;
        return n;
    }
    else {
        if (F[n -2] == -1) {
            F[n -2] = mfib(n -2);
        }
        if (F[n -1]== -1) {
            F[n-1] = mfib(n -1);
        }
        return F[n -2] + F[n -1];
    }
}


int main() {
    int i;
    for (int i = 0; i < 10; i++) {
        F[i] = -1;
    }
    cout << fib(5);
    cout <<"\n";
    cout << rfib(5);
    return 0;
}
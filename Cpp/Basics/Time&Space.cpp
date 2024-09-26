#include <iostream>
using namespace std;

int sum (int A[], int n) {
    int s, i;
    s = 0;
    for (i = 0; i < n; i++) {
        s= s +A[i];
    }
    return s;
}

void swap(x, y) {
    int t;
    t = x;
    x = y;
    y = t;
}

void add (int n) {
    int i , j;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}


int main() {
    return 0;
}
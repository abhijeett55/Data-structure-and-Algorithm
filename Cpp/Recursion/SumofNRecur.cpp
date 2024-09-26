#include <iostream>
using namespace std;

// Recursive Approach
int sum(int n){
    if (n ==0) {
        return 0;
    }
    else {
        return sum (n-1) +n;
    }
}

//Iterative Approach

int Isum (int n) {
    int sum = 0;
    int i;
    for (i = 0; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main () {
    int r;
    r =sum (5);
    printf("%d", r);
    return 0;
}
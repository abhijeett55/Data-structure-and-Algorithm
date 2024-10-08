#include <iostream>
using namespace std;

int power(int n , int m) {
    if(n == 0) {
        return 1;
    } 
    else {
        return power(m, n-1)*m;
    }
}

int power1(int n , int m) {
    if (n == 0 ){
        return 1;
    }
    if(n%2==0)
    {
        return (m*m, n/2);
    }
    else{
        return (m*m, (n-1)/2);
    }
}

int main() {
    int r = power(3,r);
    printf("%d/n",r);
    return 0;
}
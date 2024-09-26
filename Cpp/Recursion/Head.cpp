#include <iostream>

using namespace std;

void fun (int n) {
    if (n > 0) {
        fun (n -1);
        printf("%d", n);
    }
}

void fun1 (int n) {
    int i =1;
    while(n >0) {
        printf("%d", i);
        i++;
    }
}

int main() {
    fun(3);
    return 0;
}
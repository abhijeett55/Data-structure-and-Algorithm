#include <iostream>
#include <stdio.h>

using namespace std;

int fun (int n) {
static int x = 0;
if (n > 0) {
    x++;
}
return fun(n-1) + n;
}

int main () {
    int r;
    r = fun(5);
    printf("%d\n The given Function is : ", r);
    return 0;
}
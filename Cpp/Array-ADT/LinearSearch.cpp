#include <iostream>
using namespace std;


struct Array {
    int A[10];
    int length;
    int size;
};

void Display(struct Array arr) {
    printf ("The Element are : ");
    for (int i = 0; i < arr.length; i++) {
        printf("%d\n", arr.A[i]);
    }
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    return 0;
}
#include <iostream>
using namespace std;

void fun (int A[], int n) {
    for (int i= 0; i < 5; i++) {
        cout << A[i] <<endl;
    }
}

void fun1(int Arr[]) {
    cout << sizeof(Arr) / sizeof(int) << endl;
    Arr[0] = 15;
}

int *fun (int n, int size) {
    int *p;
    p = (int *)malloc(n * sizeof(int));
    int * ptr;
    ptr = new int[size];
    for (int i = 0; i < size; i++) {
        ptr[i] = i+1;
        return ptr;
    }
    return p;
    
}

int main() {
    int A [5] = {2,4,6,8,10};
    fun(A,5);

    int Arr[] = {2,4,6,8,10};
    int n = 5;
    fun1(Arr);
    for (int x : Arr) {
        cout << x <<  " ";
    }
    return 0;


}


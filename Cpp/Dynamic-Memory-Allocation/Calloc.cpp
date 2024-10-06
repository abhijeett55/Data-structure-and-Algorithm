// Continues Memory Allocation with specific Block of Elements


#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int *ptr;
    int i , n;
    cout << "Enter the Number size of Elements: ";
    cin >> n;

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        cout << "Memory Doesn't Allocated\n";
        exit(0);
    }
    else{
        cout << "Memory is Continues Allocated\n";
        for(i =0; i < n ; ++i) {
            ptr[i] = i+ 1;
        }
        for (i =0; i < n ; ++i) {
            cout << ptr[i] << " ";
        }
    }
}
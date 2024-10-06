// Dynamically Change the memory which is previous Allocated Memory

#include <iostream>
using namespace std;

int main() {
    int *ptr;
    int n , i;

    n = 5;
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        cout << "Allocation Failed";
        exit(0);
    }
    else {
        cout << "Allocation is Successfully Done\n";
        for (i =0 ; i < n ; i++) {
            ptr[i] = i+1;
            cout << ptr[i] << " ";
        }
        cout << endl;
    }
    cin >> n;
    ptr = (int*)realloc(ptr,n * sizeof(int));
    if (ptr == NULL) {
        cout << "Allocation Failed";
        exit(0);
    }
    else {
        cout << "Allocation is Successfully Done\n";
        for (i =0 ; i < n ; i++) {
            ptr[i] = i+1;
            cout << ptr[i] << " ";
        }

    }
    free(ptr);
    

}
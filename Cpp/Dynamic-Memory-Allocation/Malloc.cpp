//Dynamically Allocates a Single Large Block with specified Return

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n , i;
    int *ptr;

    cout<< "Enter the Elements\n";
    cin >> n ;
    cout << "The Number of the Elements is : " << n << endl;;
    ptr = (int *)malloc(n * sizeof(n));

    if (ptr ==  NULL) {
        cout << "Memory cann't be Allocated\n";
    }
    else {
        cout << "Print Succesfully Allocated\n";
        for (i = 0; i < n ; i++) {
            ptr[i] = i + 1;
        }
        for (i =  0; i < n; i++){
            cout << ptr[i] << " ";
        }
    }
    return 0;
}
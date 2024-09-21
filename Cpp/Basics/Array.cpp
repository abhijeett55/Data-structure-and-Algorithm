#include <iostream>
using namespace std;

int main () {

    // deacalre An Array

    int A[5];

    // initialize an Array
    int B[6] = {1,3,5,7,9,2};

    //Accesssing using loops 
    for (int i= 0; i < 6; i++) {
        cout << B[i] << " ";
    }

    for (int i = 0 ; i < 5 ;i++) {
        cout << A[i]<< " ";

    }

    //pratice 

    int Array[5];
    Array[0] = 12;
    Array[1] = 15;
    Array[2] = 23;


    cout << sizeof(Array) << endl;
    cout << Array[1] << endl;


    // initilize an array

    int X[5] = {2,4,6,8,10};
    int Y[] = {2,4,6,8,12,14,9,16};
    int Z[10] = {2,4,6,7,8,9,21,34};

    for (int i = 0 ; i < 10; i++) {
        cout << X[i] <<endl;
    }
    for (int x : Y) {
        cout << x <<endl;
    }
    int n;
    cout << "Enter Size";
    cin >> n;
    int Arr[n];
    Arr[0] =2;

    // return a garbage value
    for (int y : Arr ) {
        cout << y <<endl;
        cout << "Garbage Value" << endl;
    }
    return 0;
}
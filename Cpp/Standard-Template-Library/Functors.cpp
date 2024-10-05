#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class increm {
    private:
    int num;
    public : 
    
    increm (int n) : num(n) {
    }
};


int increment (int x) {
    return (x+1);
}

int main() {

    int arr[] = { 1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int to_add = 5;
    transform(arr, arr+ n, arr , increment);

    for(int i = 0; i< n ; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
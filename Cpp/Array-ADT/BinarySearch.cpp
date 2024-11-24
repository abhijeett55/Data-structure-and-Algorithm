#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int length;
    int = size;
};

void Display () {
    int i;
    printf("\n Elements are\n");
    for (i= 0; i < arr.length; i++) {
        printf("%d\n", &arr.A[i]);
    }
}


int BinarySearch (struct Array arr, int key) {
    int l, mid , h;
    l = 0;
    h = arr.length -1;
    while(l <= h) {
        mid = (l+h)/2;
        if(key == arr.A[mid]){
            return mid;
        }
        else if (key < arr.A[mid]){
            return h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}


int RBinarySearch(int a[], int l , int h, int key) {
    int mid;
    if(l <= h) {
        mid = (l+h)/2;
        if(key ==  a[mid]) {
            return 0;
        }
        else if(key < a[mid]) {
            return RBinarySearch(a,l, mid-1, key);
        }
        else {
            return RBinarySearch(a, mid+1,h, key);
        }
    }
    return -1;
}

int main() {
    struct Array arr = { {2,3,4,5,6},10,5};
    printf("%d\n", Binary Search (arr,10));
    Display(arr);


    printf("%d\n", RBinarySearch(arr.A, 0, arr.length,5));
    Display(arr);

    return  0;
}
#include <iostream>
using namespace std;

int isSorted(struct Array* arr) {
    int i;
    for(i =0; i <arr.length-1;i++) {
        if(arr.A[i] > arr.A[i+1]) {
            return 0;
        }
    }
    return 1;
}

void insertSort(struct Array* arr, int x) {
    int i = arr->length-1;
    if(arr->length == arr->size) {
        return ;
    }
    while(i>=0 && arr->A[i]>x) {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

void Rearrange(struct Array& arr) {
    int i, j;
    i =0, j  = arr->length-1;

    while(i<=j) {
        while(arr->A[i] <0);
        i++;
    }

    while(arr->A[i]>=0){
        j--;
    }

    if(i<j) {
        swap(&arr->A[i], &arr->A[j]);
    }
}


int main() {

    struct Array arr =  {{2,3,4,5,6}, 10, 5};
    insertSort(&arr, 20);
    Display(arr);
    cout<<insertSort(&arr);
    return 0;
}
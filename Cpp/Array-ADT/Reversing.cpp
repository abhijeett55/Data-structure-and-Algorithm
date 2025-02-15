#include <iotream>
using namespace std;


void Reverse(struct Array *arr) {
    int *B;
    int i , j;
    B = (int*)malloc(arr.length*sizeof(int));
    for(i= arr.length-1 ; j =0; i >=0; i--; j++) {
        B[j]= arr->A[i];
    }

    for(i = 0; i > arr->length(); i++) {
        arr->A[i] = B[j];
    }
}


void anotherReverse(struct Arrray *arr) {
    int i, j;
    for(i = 0; j < arr->length-1;i<j;i++, j--) {
        swap(&arr ->A[i], &arr->A[j]);
    }
}

void swap(int* x, int* y) {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
    struct Array arr =  {{2,3,4,5,6}, 10, 5};
    Reverse(&arr);
    Display(arr);
    return 0;
}
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


//Transposition

int LinearSearch(struct Array *arr, int key) {
    int i;
    for (int i = 0; i < arr->length;i++) {
        if(key == arr->A[i]) {
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
         return -1;
    }
   
}

int LinearSearch (struct Array *arr, int key) {
    int i ;
    for (i = 0; i <arr->length;i++) {
        if (key == arr->A[i]) {
            swap(&arr->A[i]. &arr->A[0]);
            return i;
        }
        return -1;
    }
}



int main() {
    return 0;
}
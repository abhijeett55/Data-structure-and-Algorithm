#include <iostream>

void Merge(struct Array* arr1, struct Array* arr2) {
    int i , j , k;
    i = j = k =0;
    struct Array * arr3 = (struct Array*)malloc*(sizeof(struct Array);

    while(i <arr1->length && j < arr2->length) {
        if(arr1->A[i] < arr2->A[j]) {
            arr3->A[k++]= arr1->A[i++];
        }
        else {
            arr3->A[k++] = arr2->A[j++];
        }
    }


    for(i = 0; i < arr1->length; i++) {
        arr3 =>A[k++] = arr1->A[i];
    }

    for(j =0; j < arr2->length; j++) {
        arr3->A[k++] = arr2->A[j];
    }

    return arr3;
}

int main() {
    struct Array arr1 = {3,8,16,20,35};
    struct Array arr2 = {4,10,12,22,23};
}
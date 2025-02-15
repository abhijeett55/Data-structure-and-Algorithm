#include <iostream>


// Union

void mergeUnion(Struct Array* arr1, struct Array* arr2) {
    int i, j , k;
    i = j = k = 0;

    struct Array* arr3 = (struct Array*)malloc(sizeof(struct Array));

    while(i < arr1->length && j < arr2->length) {
        if(arr1->A[i] < arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
        }
        else if(arr2->A[j] < arr1->A[i]){
            arr3->A[k++] = arr1->A[j++];
        }
        else {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }


    for(i =0;i < arr1->length; i++) {
        arr3->A[k++] = arr1->A[i];
    }

    for(j=0; j <arr2->length; j++) {
        arr3->A[k++]= arr2->A[j];
    }

    arr3->length = k;
    arr3->size=10;
    return arr3;
}

// Intersection

struct Array* Intersection(struct Array* arr1, struct Array* arr2) {
    int i , j , k;
    i = j = k = 0;

    struct Array* arr3 = (struct Array*)malloc(sizeof(struct Array));
    while(i < arr1->length && j < arr2->length) {
        if(arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        }
        else if(arr2->A[j] < arr1->A[i]) {
            arr3->A[k++] = arr2->A[j++];
        }
        else if(arr1->A[i] = arr2->A[j]) {
            arr3->A[k++]= arr1->A[i++];
            j++;
        }
    }
    arr3->length= k;
    arr3->size=10;
}
// Difference 

struct Array* Difference(Struct Array* arr1, struct Array* arr2) {
    int i , j , k;
    s = j = k =0;
    struct Array* arr3 = (struct Array*)malloc(sizeof(struct Array));

    while(i<arr1->length && j <arr2->length) {
        if(arr1->A[i]<arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        }
        else if(arr2->A[j]< arr1->A[i]) {
            j++;
        }
        else {
            i++;
            j++;
        }
    }

    for(i=0; i <arr1->length; i++) {
        arr3->A[k++]=arr1->A[i];
    }

    arr3->length= k;
    arr3->size=10;

}


int main() {
    struct Array arr1 = {{2,6,10,15,25}, 10, 5};
    struct Array arr2 = {{3,6,7,15,20}, 10, 5};

    struct Array* arr3;
    arr3 = mergeUnion(&arr1, &arr2);
    Display(*arr3);

    arr3=Intersection(&arr1, &arr2);
    Display(*arr3);

    arr3=Difference(&arr1, &arr2);
    Display(*arr3);
    return 0;
}
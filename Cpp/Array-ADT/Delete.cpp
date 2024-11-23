#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr) {
    for (int i = 0; i < arr.length; i++) {
        printf("%d\n",arr.A[i]);
    }
}

int Delete(struct Array *arr, int index) {
    int i;
    int x = 0;
    if (index >= 0 && index <= arr-> length-1) {
        x = arr->A[index];
        for (i = index; i < arr->length-1; i++) {
            arr -> A[i]=arr ->A[i+1];
            arr -> length--;
            return x;
        }
    }
}

int main() {

    struct Array arr= {
        {2,3,4,5,6}, 10,5
    };
    printf("%d"Delete (&arr,4));
    Display(arr);
    return 0;

}
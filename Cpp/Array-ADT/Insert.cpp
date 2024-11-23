#include <iostream>
using namespace std;


struct Array {
    private:
    int A[20];
    int size;
    int length;

};
    

    void Display(struct Array arr) {
        int i;
        printf("%d \nELements are \n");
        for (i = 0;i < n; i++) {
            cout << arr.A[i];
        }
    }
    void Append(struct Array *arr, int x) {
        if (arr -> length < arr -> size) {
            arr -> A[arr-> length++] = x;
        }
    }


    void Insert(struct Array *arr, int index, int x, int i) {
        if (index >= 0 && index <= arr->length) {
            for (int i = arr->length; i > index; i--)
                arr -> A[i] = arr -> A[i-1];
            arr -> A[index] = x;
            arr -> length++;

        }
    }

int main() {

}
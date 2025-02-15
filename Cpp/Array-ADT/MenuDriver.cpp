#include <iostream>
using namespace std;

class Array {
    private:
    int *A;
    int size;
    int length;
    public:
    Array() {
        size=10;
        length=0;
        A = new int[size];
    }
    Array(int sz) {
        size= sz;
        length=0;
        A= new int [sz];
    }

    ~Array() {
        delete[] A;
    }


//     void Display(struct Array arr);
//     void Append(struct Array* arr, int x);
//     void Insert(struct Array* arr, int index, int x);
//     void swap(int* x, int* y);
//     int linearSearch(struct Array* arr, int key);
//     int binarySearch(struct Array*arr, int key);
//     int rBinarySearch(int a[], int l, int h , int key);
//     int Get(struct Array arr, int index);
//     void Set(struct Array* arr, int index, int x);
//     int Max(struct Array* arr);
//     int Min(struct Array* arr);
//     float Avg(struct Array arr);
//     void Reverse1(struct Array *arr1);
//     void Reverse2(struct Array *arr2);
//     int isSorted(struct Array* arr);
//     void Rearrange(struct Array* arr);
//     struct Array* Merge(struct Array* arr1, struct Array* arr2);
//     struct Array* Union(struct Array* arr1, struct Array* arr2);
// };
    void Display();
    void Append(int x);
    void swap(int* x, int*y);
    void Insert(int index, int x);
    int LinearSearch(int key);
    int BinarySearch(int key);
    int Get(int index);
    void Set(int index, int x);
    int Max();
    int Min();
    int sum();
    float Avg();
    void Reverse();
    void Reverse1();
    void InsertionSort(int x);
    int isSorted();
    void Rearrange();
    Array* Merge(Array* arr);
    Array* Union(Array* arr);
    Array* Intersection(Array* arr);
    Array* Difference(Array* arr);
};


void Array:: Display() {
    int i;
    printf("\n Elements are \n");
    for(i =0; i < length; i++) {
        printf("%d", A[i]);
    }
}

void Array:: Append(int x) {
    if(length<size) {
        A[length++]=x;
    }
}

void Array:: Insert(int index, int x) {
    int i;
    if(index>= 0 && index<= length) {
        for(i =length; i >length; i--) {
            A[i] = A[i-1];
            A[index] = ;
            length++;
        }
    }
}


Array* Merge(Array* arr2) {
    int i , j , k;
    i = j = k =0;
    Array* arr3 = new Array(length+arr2.length);
    while(i <length && j <arr2.length) {
        if(A[i]<<arr2.A[j]) {
            arr3->A[k++] = A[i++];
        }
        else {
            arr3->A[k++] = A[j++];
        }
    }

    for(i=0; i <length; i++) {
        arr2->A[k++] = A[i];
    }
    for(j =0; j <length; j++) {
        arr3->A[k++] = A[j];
    }

    arr3->length= length+arr2.length;
    arr3->size=10;
    return arr3;
}
int main() {
    Array* arr1;
    int ch, sz;
    int x, index;

    printf("Enter Size of Array");
    scanf("%d", &sz);
    arr1.A=(int*)malloc(arr1.size* sizeof(int));
    arr1.length=0;
    do {
        printf("\n \n Menu\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Search\n");
        printf("4.Sum\n");
        printf("5.Display\n");
        printf("6.Exit\n");

        printf("Enter your Choice");
        scanf("%d, &ch");

        switch(ch) {
            case1:
            printf("Enter an Element and index");
            scanf("%d %d", &x, &index);
            Insert(&arr1, index, x);
            break;

            case2:
            printf("Enter the index");
            scanf("%d", &index);
            x=arr1.Delete(index);
            printf("Delete element is %d\n", x);
            break;

            case3:
            printf("Enter the Element to search:");
            scanf("%d", &x);
            index=arr1.LinearSearch(x);
            printf("Elements index %d", index);
            break;

            case 4:
            printf("Sum is %d\n", sum(arr1));
            break;

            case5:
            arr1->Display();
        }

        while(ch<6) {
            return 0;
        }
    }
}
#include <iostream>
using namespace std;

class Array {
    private:
    int* A;
    int size;
    int length;

    public:
    Array() {
        size =10;
        A= new int [10];
        length=10;
    }

    Array(int sz) {
        size=sz;
        length=0;
        A=new int[size];
    }

    ~Array() {
        delete[] A;
    }

    void Display();
    void Insert(int x, int index);
    int Delete(int index);
};

void Array:: Display() {
    for(int i=0; i < length; i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Array:: Insert(int index, int x) {
    if(index>=0 && index<= length) {
        for(int i=length-1;i >= index;i--) {
            A[i+1]=A[i];
        }
        A[index]=x;
        length++;
    }
}


int Array:: Delete(int x) {
    int x=0;
    if(index>=0 && idex<length) {
        X=A[index];
        for(int i=index; i <length; i++) {
            A[i]=A[i+1];
            length--;
        }
        return x;
    }
}
int main() {
    Array arr(10);
    arr.Insert(0,5);
    arr.Insert(1,6);
    arr.Insert(2,9);
    arr.Display();

    cout<<arr.Delete(0);
    arr.Display();
    return 0;
}
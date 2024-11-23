#include <iostream>
using namespace std;


class Array {
    private:
    int *A;
    int size;
    int length;


    public:
    Array (int size) {
        this->size = size;
        A = new int [size];
        length = 0;
    }


    void create () {
        cout << "Enter the Number of Elements : " << flush;
        cin >> length;
        cout << "Enter the array of Elements : " << endl;
        for (int i=0; i < length ; i++) {
            cout << "Enter the Array of : " << i << "=" << flush;
            cin >> A[i];
        }
    }


    void Display() {
        for (int i = 0; i <length; i++) {
            cout << A[i] <<" ";
        }
    }


    ~Array () {
        delete [] A;
        cout << "Array destroyed" << endl;
    }
};



int main() {
    
    Array arr(10);
    arr.create();
    arr.Display();

    return 0;
}
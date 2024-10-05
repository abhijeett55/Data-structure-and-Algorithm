#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {

    array <int, 5> arr1{{1,2,3,4,5}};
    array <int , 5> arr2{{3,4,1,2,5}};
    array <string, 2> arr3 = {{string ("a"), "b"}};

    cout << " The Size of an array " << endl;
    cout << "Size of the First array :  " << arr1.size() << endl;
    cout << "Size of the Second Array : " << arr2.size()<< endl;
    cout <<  "Size of the Third Array: " << arr3.size() << endl;

    for (auto i :  arr1) 
        cout << i << " ";

    arr2.fill(10);

    cout << "\t Filled ar2 : ";
    for (auto i:  arr2)
        cout << i <<" ";

    cout << "\n The ELements of the Array is : ";
    for (auto &s:  arr3) 
        cout << s << " ";

// The Size function 
    cout << arr1.size() << endl;
    cout << arr2.size() << endl;

// The First of the array and the last element of the array

    cout << arr2.front() <<endl;
    cout << arr3.front() <<endl;

    cout << arr3.end() << endl;
    cout << arr2.end() << endl;

// The [] function to denote the Indexes of the Array
    cout << arr2[0] << endl;
// The Array 1 is swaped with the Array 2
    arr1.swap(arr2);

// The empty() functiob is used to check me whether is empty or not
    cout << arr3.empty() <<endl;

//Locate the elements at the specific element
    cout << arr2.at(3);

// The Array location of the that points the Memory

cout << arr2.data() <<endl;
    return 0;
 }
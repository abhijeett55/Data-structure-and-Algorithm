#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> v;

    for (int i = 1; i <= 5; i++ ) {
        v.push_back(i);
    }
cout << "Output of Begin and End: ";

for (auto i = v.begin(); i != v.end(); i++ ) {
    cout << *i << " ";
}
cout << "\n Output of Cbegin and Cend :  ";
for (auto i = v.cbegin(); i != v.cend(); i++) {
    cout << *i << " ";
}
cout <<"\n Output of Rbegin and rend : ";
for (auto ir = v.rbegin(); ir != v.rend(); ++ir) {
    cout << *ir << " ";
}
cout <<"\n Output of Crbegin and Crend : ";
for (auto ir = v.crbegin(); ir != v.crend(); ++ir) {
    cout << *ir << " ";
}


vector <int> v1;
for (int i = 1; i <= 5; i++) {
    v1.push_back(i);
}

cout << "Size of the Vector : " << v1.size();
cout << "\n Capacity of Vector is : " << v1.capacity();
cout << "\n Max_size of Vector is :  " << v1.max_size();

v1.resize(4);
// resize the vectors is size of 4;

if (v1.empty() == false) {
    cout << " \n Vector is not Empty";
}
else {
    cout << "\n Vector is Empty";
}

v1.shrink_to_fit();
 cout << "\n The Vector Elements are ";

 for (auto it = v1.begin(); it != v1.end(); ++it) {
    cout << *it << " " <<endl;
 }


vector <int > g1;
for (int i = 0; i <= 10; i++) {
    g1.push_back(i* 10);
}

cout << "\n Reference Operator [g] is  g1[2]: " << g1[2];

cout <<"\n at g1.at[4] : " <<g1.at(4);

cout << "\n front() : " << g1.front();
cout << "\n back() : " << g1.back();
// pos pointers is assigned to Elements at 1
int *pos = g1.data();
cout << "\n the first elements is " << *pos;



vector <int> vec;
vec.assign(5,10);
// (size , the number of the elements)

cout << "The vector elements are : ";
for (int i = 0; i < vec.size(); i++) {
    cout <<  vec[i] << " ";
}

vec.push_back(15);
int n = vec.size();
cout << "\n The Last elements is : " << vec[n-1];

vec.pop_back();

cout << "\n The Vector elements are : ";
for (int i =0; i < vec.size(); i++) {
    cout << vec[i] << " ";
}

vec.insert(vec.begin(), 5);
cout << "\n The First elements is : " << vec[0];

vec.erase(vec.begin());

cout << "\n The First elements is : " << vec[0];

vec.emplace(vec.begin(), 5);
cout << "\n The first elements is : " <<vec[0];

vec.emplace_back(20);
n = vec.size();

cout << "In The Last Elmeents is : " <<vec[n - 1];

vec.clear();
cout << "\n Vector size after clear() : " <<vec.size();


// To perform Swap

vector <int > ve1 , ve2;
ve1.push_back(1);
ve1.push_back(2);
ve2.push_back(3);
ve2.push_back(4);

cout << "\n \n Vector 1 is : " ;
for (int i = 0; i < ve1.size(); ++i){
    cout << ve1[i] << " ";
}
cout << "\n Vector 2 is : ";
for (int i = 0; i < ve2.size(); ++i) {
    cout << ve2[i] << " ";
}
ve1.swap(ve2);

cout << "\n After Swap \n Vector 1 : ";
for (int i = 0 ; i < ve1.size(); i++) {
    cout << ve1[i] << " ";
}
cout << "\n Vector 2 : ";
for (int i =0; i < ve2.size(); ++i) {
    cout << ve2[i] <<" ";
}
return 0;
}
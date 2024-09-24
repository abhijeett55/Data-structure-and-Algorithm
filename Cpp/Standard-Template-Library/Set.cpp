#include <iostream>
#include <set>
using namespace std;

int main () {


    set <char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');

    for (auto& str : a) {
        cout << str << " ";
    }
    cout << "\n";

    set <int, greater<int>> s1;

    s1.insert(10);
    s1.insert(5);
    s1.insert(59);
    s1.insert(9);
    for (auto i : s1) {
        cout << i << " ";
    }


    set < int ,greater <int>> s2;
    s2.insert(40);
    s2.insert(30);
    s2.insert(60);
    s2.insert(20);
    s2.insert(50);

    s2.insert(50);
    s2.insert(10);

    set <int ,greater <int>> :: iterator itr;
    cout << "\n The Set s2 is : \n";

    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;



    set <int> s3(s2.begin(), s2.end());

    cout << "The Set three after Assign from S2 is : \n";
    for (itr = s3.begin(); itr != s3.end(); itr++){ 
        cout << *itr <<" ";
    }
    cout << endl;

    cout << "The Set 3 after the removal of elemenrts less than 30 is : \n";
    s3.erase(s3.begin(), s3.find(30));
    for (itr = s3.begin(); itr !=  s3.end(); itr++) {
        cout << *itr << " ";
    }

    int num;
    num = s3.erase(50);
    cout << endl;
    cout <<"s3.erase(50) : \n";
    cout << num <<" removed \n";

    for (itr = s3.begin(); itr != s3.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    cout << "s2.lower_bound(40): " << * s2.lower_bound(40) <<endl;
    cout << "s2.upper_bound(40): " << * s2.upper_bound(40) <<endl;

    cout << "s3.lower_bound(40) : " << *s3.lower_bound(40) <<endl;
    cout << "s3.upper_bound(40) : " << *s3.upper_bound(40) <<endl;

    return 0;

}
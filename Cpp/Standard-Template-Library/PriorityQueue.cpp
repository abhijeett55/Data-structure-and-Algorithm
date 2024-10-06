#include <iostream>
#include <queue>

using namespace std;

void showArray(int  *arr, int n) {
    for (int i = 0; i < n ; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {1,2,3,4,5,6,7};
    priority_queue <int> pq;

    cout << "Array is : ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Adding elements

    for (int i = 0; i < 6; i++) {
        pq.push(arr[i]);
    }
    cout << "Priority Queue : ";
    while (!pq.empty()) {
        cout << pq.top() <<" ";
        pq.pop();
    }

    cout << "Array is : ";
    showArray(arr, 6);
    cout << "Priority Queue : ";

    return 0;
}

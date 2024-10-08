#include <iostream>
#include <queue>

using namespace std;

    void print_queue(queue <int> q) {
        queue <int > temp = q;
        while (! temp.empty())
        {
            cout << temp.front()<< " ";
            temp.pop();
        }
        cout << "\n";
        
    }

    int main() {

        queue <int> que;
        que.push(10);
        que.push(20);
        que.push(30);

        cout << "The Queue is : ";
        print_queue(que);

        cout << "\n The Queue size is  : "<< que.size();
        cout << "\n The Front Element is : " << que.front();
        cout << "\n The last Element is : " << que.back();

        cout << "The pop elements : ";
        que.pop();
        print_queue(que);


        queue <int> q1;
        q1.push(1);
        q1.push(2);
        q1.push(3);

        queue <int> q2;
        q2.push(4);
        q2.push(5);
        q2.push(6);

        cout << "The First Queue is : ";
        print_queue(q1);

        cout << "The Second Queue is : ";
        print_queue(q2);

        q1.swap(q2);
        cout << "After swapping the First Queue is : " ;
        print_queue(q1);
        cout <<" After swapping the Second Queue is : ";
        print_queue(q2);
        cout << q1.empty();
    

        return 0;

    }
#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack <int> sta;
    sta.push(5);
    sta.push(10);
    sta.push(15);
    sta.push(20);
    sta.push(25);
    sta.push(30);
    sta.push(35);
    sta.push(40);

    int num = 0;
    sta.push(num);
    sta.pop();
    sta.pop();
    sta.pop();
    sta.pop();
    sta.pop();
    sta.pop();
    while(! sta.empty()) {
        cout << sta.top() <<" " <<endl;
        sta.pop();
    }
    return 0;
}
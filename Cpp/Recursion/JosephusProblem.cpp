#include <iostream>
#include <vector>

void Josh(int n, int k, std::vector<int>& a, int index) {
    if(a.size() == 1) {
        std::cout<<a[0];
        return;
    }

    index = (index + k) % a.size();

    a.erase(a.begin() + index);
    Josh(n, k, a, index);
}


int main() {
    int n = 40;
    int k = 7;
    k--;
    std::vector<int>a(n);
    int index = 0;

    for(int i = 0; i < 40; i++) {
        a[i] = i+1;
    }

    Josh(n, k, a, index);
}
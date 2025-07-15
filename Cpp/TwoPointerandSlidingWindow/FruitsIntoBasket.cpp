#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm> 

int solve(std::vector<int>& arr) {
    int left = 0, maxlen = 0;
    std::unordered_map<int, int> map;

    for(int right = 0 ; right < arr.size(); right++) {
        map[arr[right]]++;
        while(map.size() > 2) {
            map[arr[left]]--;
            if(map[arr[left]] == 0) { 
                map.erase(arr[left]);
                left++;
            }
        }
        maxlen = std::max(maxlen, right - left +1);
    }
    return maxlen;
}


int main() {
    int n;
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i = 0; i < n ;i++) {
        std::cin>>arr[i];
    }

    std::cout<< solve( arr ) << std::endl;
    
}
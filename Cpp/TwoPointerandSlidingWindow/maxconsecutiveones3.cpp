#include <iostream>
#include <vector>
#include <algorithm>

int solve(std::vector<int>& arr, int k) {
  int left = 0, maxlen  = 0, zeros = 0, len  = 0;
  for(int right = 0; right < arr.size(); right++){
    if(arr[right] == 0) zeros++;
    while(zeros > k) {
      if(arr[left] == 0)  zeros--;
      left++;
    }
    if(zeros <= k) {
      len = right - left + 1;
      maxlen = std::max(maxlen , len);
    }
    
  }
  return maxlen;
}

int main() {
  int n , k;
  std::cin>>n>>k;
  std::vector<int> arr(n);
  
  for(int i = 0; i < n; i++) {
    std::cin>>arr[i];
  }
  
  std::cout<< solve(arr, k) <<std::endl;
}
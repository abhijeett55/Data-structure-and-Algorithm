#include <iostream>
#include <vector>

int solve(std::vector<int>& bin, int k) {
  if(k < 0) { return 0; }
  
  int left = 0, count = 0, sum = 0;
  for(int right = 0; right < bin.size(); right++) {
    sum += bin[right];
    while(sum > k) {
      sum -= bin[left];
      left++;
    }
    
    count = count + (right - left + 1);
  }
  return count;
}

int main() {
  int n, goal;
  std::cin>>n>>goal;
  std::vector<int> bin(n);
  for(auto& x : bin) {
    std::cin>> x;
  }
  int res = solve(bin, goal) - solve(bin, goal-1);
  std::cout<< res <<std::endl;
}
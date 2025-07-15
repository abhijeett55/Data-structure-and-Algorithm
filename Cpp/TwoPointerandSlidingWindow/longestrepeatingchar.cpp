#include <iostream>
#include <vector>

int solve(std::string& s, int k) {
  int left = 0, maxlen = 0, maxcount = 0;
  std::vector<int>count(26, 0);
  
  
  for(int right = 0; right < s.length(); right++) {
    count[s[right] - 'A']++;
    maxcount = std::max(maxcount, count[s[right] - 'A']);
    
    while( (right - left + 1) - maxcount > k) {
      count[s[left] - 'A']--;
      left++;
    }
    
    maxlen = std::max(maxlen , right - left + 1);
  }
  
  return maxlen;
  
}
int main() {
  std::string s;
  int k;
  std::cin>>s>>k;
  
  
  std::cout<< solve(s, k) <<std::endl;
}
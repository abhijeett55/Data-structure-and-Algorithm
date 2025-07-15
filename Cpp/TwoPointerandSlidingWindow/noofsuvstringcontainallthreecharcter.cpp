#include <iostream>
#include <unordered_map>
#include <vector>


int solve(std::string& s) {
  
  int left = 0, maxlen = 0;
  int res = 0;
  std::unordered_map<char, int> map;
  for(int right = 0; right < s.length(); right++) {
    map[s[right]]++;
    
    while(map['a'] > 0 && map['b'] > 0 && map['c'] > 0) {
      res += (s.length() - right);
      map[s[left]]--;
      left++;
    }
  }
  return res;
  
  
}


int main() {
  std::string s;
  
  std::cin>>s;
  
  std::cout<< solve(s) <<std::endl;
}
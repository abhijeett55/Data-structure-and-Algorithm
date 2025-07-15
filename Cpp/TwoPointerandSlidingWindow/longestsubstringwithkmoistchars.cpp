#include <iostream>
#include <unordered_map>

void solve(std::string& s, int k) {
  
  int left = 0, maxlen = 0;
  std::string str= "";
  std::unordered_map<char , int> map;
  
  for(int right = 0; right < s.length(); right++) {
    map[s[right]]++;
    while(map.size() > k) {
      map[s[left]]--;
      if(map[s[left]] == 0) {
        map.erase(s[left]);
      }
      left++;
    }
   if(map.size() == k) {
     maxlen = std::max(maxlen, right - left + 1);
     str = s.substr(left , maxlen);
   } 
  }
  
  std::cout<<str << " " << maxlen<<std::endl;
  
  
}


int main() {
  std::string s;
  int k;
  
  std::cin>>s>>k;
  
  solve(s, k);
}
#include <iostream>
#include <string>




/** Brute Force **/

/**

bool isPalindrome(std::string s, int l, int r) {
    while(l < r) {
        if(s[l++] != s[r--]) {
            return false;
        }
    }
    return true;
}

std::string longestPalindrome(std::string& s) {
    int n = s.length();
    std::string ans = "";

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(isPalindrome(s, i , j) && j - i+ 1 > (int)ans.size()) {
                ans = s.substr(i, j - i + 1);
            }
        }
    }
    return ans;
}

**/

// Time - O(n^3)
// Space - O(1)

/** Optimal Dynamic Programming && BottomUp Approach **/

std::string longestPalindrome(std::string s) {
    int n = s.size();
    std::vector<bool<std::vector<bool>>dp(n+1 , std::vector<bool>(n+1, false));
    std::string ans = "";

    for(int len = 1; len <= n; len++) {
        for(int i = 1; i <= n; i++) {
            
        }
    }
}


int main() {
    std::string s = "babad";
    std::cout<<longestPalindrome(s)<<std::endl;
}
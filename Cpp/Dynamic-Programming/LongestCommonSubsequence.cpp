#include <iostream>
#include <vector>
#include <cstring>
#include <climits>


/**
int lcsRecur(const std::string& str1, const std::string& str2, int n, int m) {
    if(m  == 0|| n == 0) return 0;

    if(str1[n-1] == str2[m-1]) {
        return 1 + lcsRecur(str1, str2, n-1, m-1);
    }
    return std::max(lcsRecur(str1, str2, n-1, m) , lcsRecur(str1, str2, n, m-1));
}
**/
/**
int static dp[100][1001];

int lcsMemo(const std::string& str1, const std::string& str2, int n, int m) {
    if(n == 0|| m == 0) return 0;
    if(dp[n][m] != -1) return dp[n][m];


    if(str1[n-1] == str2[m-1]) {
        return dp[n][m] = 1 + lcsMemo(str1, str2, n-1, m-1);
    }
    return dp[n][m] = std::max(lcsMemo(str1, str2, n-1, m) , lcsMemo(str1, str2, n, m-1));
}

**/
/**
int lcsBottom(const std::string& str1, const std::string& str2, int n, int m) {
    std::vector<std::vector<int>>dp(n+1, std::vector<int>(m+1, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(str1[i-1] == str2[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            } else  {
                dp[i][j] = std::max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}
**/

int lcsOpt(const std::string& str1, const std::string& str2, int n, int m) {
    std::vector<int>prev(m+1), curr(m+1);

    for(int i= 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(str1[i-1] == str1[j-1]) {
                curr[j] = 1 + prev[j-1];
            } else {
                curr[j] = std::max(curr[j], prev[j-1]);
            }
        }
        prev = curr;
    }
    return prev[m];
}




int main() {
    
    std::string str1, str2;
    str1 = "abcde", str2 = "ace";
    // std::cin>>str1>> str2;
    // int ans = lcsRecur(str1, str2, str1.length(), str2.length());
    // std::memset(dp, -1, sizeof(dp));
    // int ans = lcsMemo(str1, str2, str1.length(), str2.length());
    // int ans = lcsBottom(str1, str2, str1.length(), str2.length());
    int ans = lcsOpt(str1, str2, str1.length(), str2.length());
    std::cout<<ans<<std::endl;
    return 0;
}
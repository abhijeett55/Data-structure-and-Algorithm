#include <iostream>
#include <vector>
#include <cstring>

// Recursive Solution
/**
int UnboundedKnapsackRecur(std::vector<int>& wt, std::vector<int>& val, int n, int cap) {
    if(n == 0 || cap == 0) return 0;

    if(wt[n-1] > cap) {
        return UnboundedKnapsackRecur(wt, val, n-1, cap);
    }

    return std::max(UnboundedKnapsackRecur(wt, val, n-1, cap) , val[n-1]+ UnboundedKnapsackRecur(wt , val, n, cap - wt[n-1])); 
}

**/
// Memoization
/**
int static dp[1001][1001];

int UnboundedKnapsackMemo(std::vector<int>& wt, std::vector<int>& val, int n, int cap) {
    if(n == 0 || cap == 0) return 0;
    if(dp[n][cap] != -1) return dp[n][cap];

    if(wt[n-1] > cap) {
        return dp[n][cap] = UnboundedKnapsackMemo(wt, val, n-1, cap);
    }

    return dp[n][cap] = std::max(UnboundedKnapsackMemo(wt, val, n-1, cap), val[n-1] + UnboundedKnapsackMemo(wt, val, n, cap - wt[n-1]));
}
**/

/**
int UnboundedKnapsackBottom(std::vector<int>& wt, std::vector<int>& val, int n, int cap) {
    std::vector<std::vector<int>>dp(n+1, std::vector<int>(cap+1, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= cap; j++) {
            if(wt[n-1] <= cap) {
                dp[i][j] = std::max(dp[i-1][j], val[i-1] + dp[i][j - wt[i-1]]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][cap];
}
**/

int UnboundedKnapsackOpt(std::vector<int>& wt, std::vector<int>& val, int n, int cap) {
    std::vector<int>dp(cap+1, 0);

    for(int i = 0; i < n ; i++) {
        for(int j = wt[i]; j <= cap; j++) {
            dp[j] = std::max(dp[j], val[i] + dp[j - wt[i]]);
        }
    }
    return dp[cap];
}

int main() {
    std::vector<int> wt = {2, 4, 6};
    std::vector<int> val = {5, 11, 13};
    int cap = 10;
    // std::cout<<UnboundedKnapsackRecur(wt, val, wt.size(), cap);
    // std::memset(dp, -1, sizeof(dp));
    // std::cout<<UnboundedKnapsackMemo(wt, val, wt.size(), cap);
    // std::cout<<UnboundedKnapsackBottom(wt, val, wt.size(), cap);
    std::cout<<UnboundedKnapsackOpt(wt, val, wt.size(), cap);
}

#include <iostream>
#include <vector>
#include <cstring>
#include <climits>

//Recursive 
/**
int coinChangeRecur(std::vector<int>& coins, int n, int target) {
    if(n == 0) return 0;
    if(target < 0 ) return INT_MIN;

    if(coins[n-1] > target) {
        return coinChangeRecur(coins, n-1, target);
    }
    return std::max(coinChangeRecur(coins, n-1, target) , 1+ coinChangeRecur(coins, n, target - coins[n-1]));
}
**/
/**
int static dp[1001][1001];

int coinChangeMemo(std::vector<int>& coins, int n , int target) {
    if(n == 0) return 0;
    if(target < 0) return INT_MIN;
    if(dp[n][target] != -1) return dp[n][target];

    if(coins[n-1] > target) {
        return dp[n][target] = coinChangeMemo(coins, n-1, target);
    }

    return dp[n][target] = std::max(1+coinChangeMemo(coins, n, target - coins[n-1]), coinChangeMemo(coins,n-1, target));
}

**/

/**

int coinChangeBottom(std::vector<int>& coins, int n, int target) {
    std::vector<std::vector<int>>dp(n+1, std::vector<int>(target+1));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= target; j++) {
            if(coins[i-1] <= j) {
                dp[i][j] = std::max(dp[i-1][j] , 1+ dp[i][j - coins[i-1]]);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][target];
}
**/

int coinChangeOpt(std::vector<int>& coins, int n , int target) {
    std::vector<int>dp(target+1, 0);
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        for(int j = coins[i-1]; j <= target; j++) {
            dp[j] = std::max(dp[j] , 1 + dp[j -coins[i-1]]);
        }
    }

    return dp[target];
}




int main() {
    std::vector<int> coins = {2, 5, 10};
    int target = 24;
    // std::cout<<coinChangeRecur(coins, coins.size(), target);
    // std::memset(dp, -1, sizeof(dp));
    // std::cout<<coinChangeMemo(coins, coins.size(), target);
    // std::cout<<coinChangeBottom(coins, coins.size(), target);
    std::cout<<coinChangeOpt(coins, coins.size(), target);
    return 0;
}
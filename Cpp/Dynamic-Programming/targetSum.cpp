#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

// BruteForces Recurive 
/**

bool targetSumRecursive(std::vector<int>& arr, int n, int sum) {
    if(sum == 0) return true;
    if(n == 0 ) return false;

    if(arr[n-1] > sum) return targetSumRecursive(arr, n-1, sum);

    return targetSumRecursive(arr, n-1, sum - arr[n-1]) || targetSumRecursive(arr, n-1 , sum);

}
**/

// Time - O(2^N)

// target Sum Memoization method
/**
int memo[101][1001];

bool targetsumMemo(std::vector<int>& arr, int n , int sum) {
    if(sum == 0) return true;
    if(n == 0) return false;

    if(memo[n][sum] != -1) return memo[n][sum];

    if(arr[n-1] > sum) return memo[n][sum] = targetsumMemo(arr, n-1, sum);

    return memo[n][sum] =  targetsumMemo(arr, n-1, sum - arr[n-1]) || targetsumMemo(arr, n-1, sum);
}
**/

//Time - O(sum * n)


// Tabulation method

/**

bool targetSunTabulation(std::vector<int>& arr, int n, int sum) {
    std::vector<std::vector<bool>> dp(n+1, std::vector<bool>(sum+1, false));

    for(int i = 0; i <= n ; i++) {
        dp[i][0] = true;
    }

    for(int i = 1; i<= n; i++) {
        for(int j = 1; j <= sum ; j++) {
            if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]];
        }
    }

    return dp[n][sum];
}
**/

// Time - O(N*SUM)


bool targetSumOptimised(std::vector<int>&arr, int n, int sum) {
    std::vector<bool> dp(sum+1, false);
    dp[0] = true;

    for(auto& i : arr) {
        for(int j = sum; j >= i; j--) {
            dp[j] = dp[j] || dp[j - i];
        }
    }
    return dp[sum];
}


int main() {
    std::vector<int> arr= {3, 34, 4, 12, 5, 2};
    int sum = 9;

    // std::cout<<(targetSumRecursive(arr, arr.size(), sum) ? "true" : "false");

    // std::memset(memo, -1 , sizeof(memo));

    // std::cout<<(targetsumMemo(arr, arr.size(), sum) ? "true" : "false");

    // std::cout<<(targetSunTabulation(arr, arr.size(), sum) ? "true" : "false");


    std::cout<<(targetSumOptimised(arr, arr.size(), sum) ? "true" : "false");
    return 0;
}
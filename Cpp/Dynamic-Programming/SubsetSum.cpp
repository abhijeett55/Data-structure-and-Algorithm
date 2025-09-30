#include <iostream>
#include <vector>
#include <cstring>

// Brute Force
/**
bool subsetSumRecursive(std::vector<int>& arr, int n , int sum) {
    if(sum == 0)return true;
    if(n == 0) return false;

    if(arr[n-1] > sum) return subsetSumRecursive(arr, n-1, sum);

    return subsetSumRecursive(arr, n-1, sum - arr[n-1]) || subsetSumRecursive(arr, n-1, sum);
}
**/

//Time complexity - O(2^n)


// Memoization
/**
int dp[101][1001];
bool subsetSumMemoization(std::vector<int>& arr, int n, int sum) {
    if(sum == 0) return true;
    if(n == 0) return false;
    if(dp[n][sum] != -1 ) return dp[n][sum]; 

    if(arr[n-1] > sum ) return subsetSumMemoization(arr, n-1, sum);

    return dp[n][sum] = subsetSumMemoization(arr, n-1, sum - arr[n-1]) || subsetSumMemoization(arr, n-1, sum); 
}
**/

// Tabulation Method
/**
bool subsetSumBottomUp(std::vector<int>& arr, int n, int sum) {
    std::vector<std::vector<int>>dp(n+1, std::vector<int>(sum+1, false));

    for(int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sum; j++) {
            if(arr[i-1] <= j) {
                dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
} 

**/

// Space Optimised 
 bool subsetSumSpace(std::vector<int>& arr, int n , int sum) {
    std::vector<int>dp(sum+1, false);
    dp[0] = true;
    for(int i = 0; i < n; i++) {
        for(int j = sum ; j >= arr[i]; j--) {
            dp[j] = dp[j] || dp[j - arr[i]];
        }
    }

    return dp[sum];

 }



int main() {
    std::vector<int> arr = {3, 34, 4, 12, 5};
    int sum = 9;

    // std::cout<< (subsetSumRecursive(arr, arr.size(), sum) ? "true" : "false");
    // std::memset(dp, -1, sizeof(dp));
    // std::cout<< (subsetSumMemoization(arr, arr.size(), sum) ? "true" : "false");

    // std::cout<< (subsetSumBottomUp(arr, arr.size(), sum) ? "true" : "false");

    std::cout<< (subsetSumSpace(arr, arr.size(), sum) ? "true" : "false");
    return 0;
}

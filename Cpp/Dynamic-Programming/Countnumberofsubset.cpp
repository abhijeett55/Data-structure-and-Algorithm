#include <iostream>
#include <vector>
#include <cstring>



// Recursive Solution
/**
int countSubset(std::vector<int>& arr, int n, int sum) {
    if(sum == 0) return 1;
    if(n ==  0) return 0;
    if(arr[n-1] > sum) {
        return countSubset(arr, n-1, sum);
    }

    return countSubset(arr, n -1 , sum) + countSubset(arr, n-1, sum - arr[n-1]);
}
**/


//Memoization

/**


static int dp[1001][1001];
int countSubsetMemo(std::vector<int>&arr, int n, int sum) {
    if(sum == 0) return 1;
    if(n == 0) return 0;

    if(dp[n][sum] != -1) return dp[n][sum];

    if(arr[n-1] > sum) {
        return dp[n][sum] = countSubsetMemo(arr, n-1, sum);
    }

    return dp[n][sum] = countSubsetMemo(arr, n-1, sum) + countSubsetMemo(arr, n-1, sum - arr[n-1]);
}

**/

//Tabulation
/**
int countSubsetTab(std::vector<int>&arr, int n, int sum) {
    std::vector<std::vector<int>>dp(n+1, std::vector<int>(sum+1, 0));

    for(int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    for(int i = 1; i <= n ; i++) {
        for(int j = 0 ; j <= sum; j++) {
            if(arr[i-1] <= j) {
                dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i-1]];
            } else {
                dp[i][j] = dp[i-1][j];
            }
            
        }
    }

    return dp[n][sum];
}

**/

int countSubsetOpt(std::vector<int>& arr, int n , int sum) {
    std::vector<int>dp(sum+1, 0);

    dp[0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = sum ; j >= arr[i]; j--) {
            dp[j] = dp[j] + dp[j - arr[i]];
        }
    }
    return dp[sum];
}

int main() {
    std::vector<int> arr = {2, 3, 5, 6, 8, 10};
    int sum = 10;
    // std::cout<<countSubset(arr, arr.size(), sum) <<std::endl;
    // std::memset(dp, -1 , sizeof(dp));
    // std::cout<<countSubsetMemo(arr, arr.size(), sum) <<std::endl;

    // std::cout<<countSubsetTab(arr, arr.size(), sum) << std::endl;
    std::cout<<countSubsetOpt(arr, arr.size(), sum) << std::endl;
    return 0;
}
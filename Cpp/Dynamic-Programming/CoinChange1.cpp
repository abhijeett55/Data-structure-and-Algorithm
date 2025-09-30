#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

//Coin change Recursive Brute force
/**

int coinchangerecursive(std::vector<int>& arr, int n , int sum) {
    if(sum == 0) return 1;
    if(n == 0 ) return 0;
    if(sum <  0) return 0;

    return coinchangerecursive(arr, n, sum - arr[n-1]) + coinchangerecursive(arr, n-1, sum);
}
**/
// Time - O(2^N)

// Memoization 
/**

int memo[101][1001];

int coinchangeMemo(std::vector<int>&arr, int n, int sum) {
    if(sum == 0) return 1;
    if(n == 0) return 0;
    if(memo[n][sum] != -1) return memo[n][sum];

    if(arr[n-1] <= sum) return memo[n][sum] = coinchangeMemo(arr, n-1, sum) + coinchangeMemo(arr, n, sum - arr[n-1]);

    return memo[n][sum] = coinchangeMemo(arr, n-1, sum); 
}
**/

// Time- O(n*sum)


// BottomsUp Approach

/**

int coinchangeDp(std::vector<int>&arr, int n, int sum) {
    std::vector<std::vector<int>>dp(n+1, std::vector<int>(sum+1, 0));

    for(int i=0; i <=n; i++) dp[i][0] = 1;


    for(int i =1; i <= n; i++) {
        for(int j = 1; j <= sum; j++) {
            if(arr[i-1] <= j) dp[i][j] = dp[i-1][j] + dp[i][j - arr[i-1]];
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}
**/

// Time - O(N*SUM)


int coinchangeOptimnised(std::vector<int>& arr, int n , int sum) {
    std::vector<int>dp(sum+1, 0);
    dp[0]= 1;

    for(auto& i: arr) {
        for(int j = i; j<= sum; j++) {
            dp[j] += dp[j - i];
        }
    }
    return dp[sum];
}

int main() {
    std::vector<int> arr = {1, 2, 3};
    int sum = 4;

    // std::cout<<coinchangerecursive(arr, arr.size(), sum);
    // std::memset(memo, -1, sizeof(memo));
    // std::cout<<coinchangeMemo(arr, arr.size(), sum);
    // std::cout<<coinchangeDp(arr, arr.size(), sum);

    std::cout<<coinchangeOptimnised(arr, arr.size(), sum);
    return 0;
}
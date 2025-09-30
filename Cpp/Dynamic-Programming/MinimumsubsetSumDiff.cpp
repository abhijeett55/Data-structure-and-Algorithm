#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
#include <algorithm>

// Recursive Method

/**

int minimumRecursive(std::vector<int>& arr,  int n , int sum) {
    if(sum == 0 || n == 0) return 0;

    if(arr[n-1] > sum) {
        return  minimumRecursive(arr, n-1, sum);
    }

    return std::max(minimumRecursive(arr, n-1, sum), arr[n-1] + minimumRecursive(arr, n-1, sum - arr[n-1]));
}

**/


// Tabulation 
/**
int minimumMemo(std::vector<int>& arr, int n, int sum, std::vector<std::vector<int>>&dp ) {
    if(sum == 0 || n == 0) return 0;
    if(dp[n][sum] != -1) return dp[n][sum];


    if(arr[n-1] > sum) {
        return dp[n][sum] = minimumMemo(arr, n-1, sum, dp);
    }
    return dp[n][sum] = std::max(minimumMemo(arr, n-1, sum, dp) , arr[n-1] + minimumMemo(arr, n-1, sum - arr[n-1], dp) );
 }

 

int static dp[1001][1001];

int minimumMemo(std::vector<int>& arr, int n , int sum) {
    if(sum == 0 || n == 0) return 0;
    if(dp[n][sum] != -1) return dp[n][sum];


    if(arr[n-1] > sum) {
        return dp[n][sum] =  minimumMemo(arr, n-1, sum);
    }

    return dp[n][sum] = std::max( arr[n-1] + minimumMemo(arr, n-1, sum - arr[n-1]), minimumMemo(arr, n-1, sum));
}

**/

//Bottom Up Approach

/**

int minimumDp(std::vector<int>& arr, int n) {
    int sum = 0;
    for(int x: arr) sum += x;
    std::vector<std::vector<bool>>dp(n+1, std::vector<bool>(sum/2+1, false));

    for(int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    for(int i = 1; i<= n; i++) {
        for(int j = 1; j <= sum/2; j++) {
            if(arr[i-1] <= j) {
                dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    int s1 = 0;
    for(int s = sum / 2; s >= 0; s--) {
        if(dp[n][s]) {
            s1 = s;
            break;
        }
    }
    int s2 = sum - s1;
    return abs(s1 - s2);
}

**/

int minimumOpt(std::vector<int>& arr, int n) {
    int sum = 0;
    for(int x: arr) sum += x;
    std::vector<bool>dp(sum/2+1, false);
    dp[0] = true;
    for(int i = 0; i < n; i++) {
        for(int j = sum/2; j >= arr[i]; j--) {
            dp[j] = dp[j] || dp[j - arr[i]];
        }
    }

    int s1 = 0;
    for(int s = sum/2 ; s >= 0; s--) {
        if(dp[s]) {
            s1 = s;
            break;
        }
    }

    int s2 = sum - s1;
    return  abs(s1 -s2); 
}

// int minimumSubset(std::vector<int>& arr, int n) {
//     int sum = 0;
//     for(auto& x: arr) {
//         sum+= x;
//     }

//     // int s1 = minimumRecursive(arr, n , sum/2);
//     int target = sum/2;
//     // std::memset(dp, -1, sizeof(dp));
//     // int s1 = minimumMemo(arr, n , target);
//     int s1 = minimumDp(arr, n, target);
//     int s2 = sum - s1;
//     return abs(s1 - s2);
// }

int main() {
    std::vector<int> arr = {1, 6, 14, 5};
    std::cout << minimumOpt(arr, arr.size()) << std::endl;
    return 0;
}
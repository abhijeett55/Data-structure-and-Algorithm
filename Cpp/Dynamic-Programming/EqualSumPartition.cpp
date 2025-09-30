#include <iostream>
#include <vector>

// Recursive Method

/**

bool equalsumPartitionRecursive(std::vector<int>& arr, int  n, int sum) {
    if(sum == 0) return true;
    if(n == 0 ) return  false;

    if(arr[n-1] > sum) {
        return equalsumPartitionRecursive(arr, n-1, sum);
    }

    return equalsumPartitionRecursive(arr, n-1, sum) || equalsumPartitionRecursive(arr, n-1, sum - arr[n-1]);
}

bool equalsumPartition(std::vector<int>& arr, int n) {
    int total = 0;
    for(auto& x: arr) {
        total += x;
    }

    if(total%2 != 0) {
        return false;
    }

    equalsumPartitionRecursive(arr, n, total/2);
}
**/

// Memoization


/**

bool equalsumPartitiveMemo(std::vector<int>& arr, std::vector<std::vector<int>>&dp, int n, int sum) {
    if(sum == 0) return true;
    if(n == 0) return false;

    if(dp[n][sum] != -1) return dp[n][sum];

    if(arr[n-1] > sum) {
        return dp[n][sum] = equalsumPartitiveMemo(arr, dp, n-1, sum);
    }

    return dp[n][sum] = equalsumPartitiveMemo(arr, dp, n-1, sum) || 
    equalsumPartitiveMemo(arr, dp, n-1, sum - arr[n-1]);
}

bool equalsumPartition(std::vector<int>& arr, int n) {
    int total = 0;
    for(auto& x: arr) {
        total += x;
    }

    if(total%2 != 0) {
        return false;
    }

    total = total / 2;

    std::vector<std::vector<int>>dp(n+1, std::vector<int>(total+1, -1));

    return equalsumPartitiveMemo(arr, dp, n, total);
}

**/

//Tabulation Method
/**
bool equalsumPartitionTab(std::vector<int>& arr, int n , int sum) {
    std::vector<std::vector<int>>dp(n+1, std::vector<int>(sum+1, false));

    for(int i = 0; i < n; i++) {
        dp[i][0] = true;
    }

    for(int i = 1; i <= n ; i++) {
        for(int j = 1; j <= sum ; j++) {
             if(arr[i] <= j) {
                dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]];
             } else {
                dp[i][j] = dp[i-1][j];
             }
        }
    }
    return dp[n][sum];
}
**/

bool equalsumPartitionOpt(std::vector<int>arr, int n, int sum) {
    std::vector<int>dp(sum+1, false);
    dp[0] = true;

    for(int i = 0; i < n; i++) {
        for(int j = sum ; j >= 0; j--) {
            dp[j] = dp[j] || dp[j - arr[i]];
        }
    }
    return dp[sum];
}


bool equalsumPartition(std::vector<int>& arr, int n) {
    int total = 0;
    for(auto& x: arr) {
        total += x;
    }

    if(total%2 != 0) {
        return false;
    }

    total = total / 2;

    return equalsumPartitionOpt(arr, n, total);
}




int main() {
    std::vector<int> arr = { 1 , 5, 11, 5 };
    std::cout<< (equalsumPartition(arr, arr.size())) ? "true" : "false";
}
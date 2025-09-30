#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>

// Recursive 

/**

int countSubDiffRecur(std::vector<int>& arr, int n , int target) {
    if(target == 0) return 1;
    if(n == 0) return 0;

    if(arr[n-1] > target) return countSubDiffRecur(arr, n-1, target);

    return countSubDiffRecur(arr, n-1, target - arr[n-1]) + countSubDiffRecur(arr, n-1, target);
}
**/

//Memoiazation
/**
int static dp[1001][1001];
int countSubDiffMemo(std::vector<int>& arr, int n , int target) {
    if(target == 0) return 1;
    if(n == 0) return 0;

    if(dp[n][target] != -1) return dp[n][target];

    if(arr[n-1] > target) return dp[n][target] = countSubDiffMemo(arr, n-1, target);

    return dp[n][target] = countSubDiffMemo(arr, n-1, target - arr[n-1]) + 
    countSubDiffMemo(arr, n-1, target);
}

int countSubDiff(std::vector<int>& arr, int n, int diff) {
    int sum = 0;
    for(int x: arr) sum += x;

    if((sum + diff) % 2 != 0) return 0;
    int target = (sum+ diff)/2;

    std::memset(dp, -1, sizeof(dp));

    // return countSubDiffRecur(arr, n, target);
    return countSubDiffMemo(arr, n, target);

}

**/

//Tabulation

/**

int countSubDiffTab(std::vector<int>& arr, int n, int diff) {
    int sum = 0;
    for(int x: arr) sum += x;
    if((sum + diff)% 2 != 0) return 0;
    int target = (sum + diff) / 2;
    std::vector<std::vector<int>>dp(n+1, std::vector<int>(target+1, 0));

    for(int i =0; i <= n; i++) {
        dp[i][0] = 1;
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= target; j++) {
            if(arr[i-1] <= j) {
                dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i-1]];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][target];
}

**/

int countSubDiffOpt(std::vector<int>& arr, int n, int diff) {
    int sum = 0;
    for(int x: arr) sum+= x;
    if((sum+ diff) % 2 != 0) return 0;
    int target = (sum+ diff) / 2;
    if(target < 0 || target > sum) return 0;
    std::vector<int>dp(target+1, 0);
    dp[0] = 1;

    for(int i = 0; i < n; i++) {
        for(int j = target; j >= arr[i]; j--) {
            dp[j] = dp[j] + dp[j - arr[i]];
        }
    }
    return dp[target];
}


int main() {
    std::vector<int> arr = { 1, 1, 2, 3};
    int diff = 1;
    // std::cout<<countSubDiff(arr, arr.size(), diff) << std::endl;
    // std::cout<<countSubDiffTab(arr, arr.size(), diff) << std::endl;
    std::cout<<countSubDiffOpt(arr, arr.size(), diff) << std::endl;
}
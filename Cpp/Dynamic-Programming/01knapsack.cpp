#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>


// Brute Force
/**
int knapsackRecursive(int w, int n, std::vector<int>&val, std::vector<int>& wt) {
    if( n == 0 || w  == 0) return 0;
    


    if(wt[n-1] > w) return knapsackRecursive(w, n-1, val, wt);


    return std::max(val[n-1] + knapsackRecursive(w - wt[n-1], n-1, val, wt), knapsackRecursive(w, n-1, val,wt));
}

**/

// Time complextity : O(2^N);

// Memoization 

/***

int dp[101][1001]; // basaed on constraints

int knapsackdp(int w, int n, std::vector<int>&val, std::vector<int>&wt) {
    if(w == 0 || n == 0) return 0;

    if(dp[n][w] != -1) return dp[n][w];

    if(wt[n-1] > w) return dp[n][w] = knapsackdp(w, n-1, val, wt);


    return dp[n][w] = std::max( val[n-1] + knapsackdp(w- wt[n-1] , n-1, val, wt) , knapsackdp(w, n-1, val, wt));
}

**/


// Time Complexity - O(N X W)


// Tabulation Method
/**

int knapsack(int w, int n , std::vector<int>& val, std::vector<int>& wt) {
    std::vector<std::vector<int>>dp(n+1, std::vector<int>(w+1, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= w; j++) {
            if(wt[i-1] <= j) {
                dp[i][j] = std::max(val[i-1] + dp[i-1][j - wt[i-1]], dp[i-1][j]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][w];
}
**/

//Time Complexity = 0(NxW)


// Space Optimization Appraoch(tabulation)


int knapsackOptimized(int w, int n, std::vector<int>& val, std::vector<int>& wt) {
    std::vector<int> dp(w+1, 0);


    for(int i = 0;i < n; i++) {
        for(int j = w; j>= wt[i]; j--) {
            dp[j] = std::max(dp[j], val[i] + dp[j - wt[i]]);
        }
    }
    return dp[w];
}

//Time Complexity O(n*w)




int main() {
    std::vector<int> val = {60, 100, 120};
    std::vector<int> wt = {10, 20, 30};
    int w = 50;
    int n = val.size();
    // memset(dp, -1, sizeof(dp));

    // std::cout<< knapsackRecursive(w, n, val, wt);
    // std::cout<< knapsackdp(w, n, val, wt);

    // std::cout<<knapsack(w, n, val, wt);

    std::cout<<knapsackOptimized(w, n , val, wt);


}
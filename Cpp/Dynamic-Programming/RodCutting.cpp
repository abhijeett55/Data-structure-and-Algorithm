#include <iostream>
#include <vector>
#include <cstring>

//Recursive 
/**

int rodCuttingRecur(std::vector<int>& rodlen, std::vector<int>& prices, int len, int n) {
    if(n == 0 || len == 0) return 0;
    if(rodlen[len-1] > n) {
        return rodCuttingRecur(rodlen, prices, len-1, n);
    }

    return std::max(rodCuttingRecur(rodlen, prices, len - 1, n) , prices[len - 1] + rodCuttingRecur(rodlen, prices, len, n-rodlen[len-1]));
}
**/

/**

int static dp[1001][1001];

int rodCuttingMemo(std::vector<int>& rodlen, std::vector<int>& prices, int len, int n) {
    if(len == 0 || n == 0) return 0;
    if(dp[len][n] != -1) return dp[len][n];

    if(rodlen[len-1] > n) {
        return dp[len][n] = rodCuttingMemo(rodlen, prices, len-1, n);
    }

    return dp[len][n] = std::max(rodCuttingMemo(rodlen, prices, len -1 , n ), prices[len-1] + rodCuttingMemo(rodlen, prices, len , n - rodlen[len-1]));
}

**/
/**
int rodCuttingDp(std::vector<int>& rodlen, std::vector<int>& prices, int len, int n) {
    std::vector<std::vector<int>>dp(len+1, std::vector<int>(n+1, 0));

    for(int i =1; i <= len; i++) {
        for(int j = 1; j <= n; j++) {
            if(rodlen[i-1] <= j) {
                dp[i][j] = std::max(dp[i-1][j], prices[i-1] + dp[i][j - rodlen[i-1]]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[len][n];
}
**/

int rodCuttingOpt(std::vector<int>& rodlen, std::vector<int>& prices, int len, int n) {
    std::vector<int>dp(n+1, 0);
    for(int i = 0; i < len; i++) {
        for(int j = rodlen[i] ; j <= n; j++) {
            dp[j] = std::max(dp[j], prices[i] + dp[j - rodlen[i]]);
        }
    }
    return dp[n];
}



int main() {
    int n = 8;
    std::vector<int> rodlen = {1, 2, 3, 4, 5, 6, 7, 8 };
    std::vector<int> prices = { 1, 5, 8, 9, 10, 17, 17, 20 };
    // std::cout<<rodCuttingRecur(rodlen, prices, rodlen.size(), n);
    // std::memset(dp, -1, sizeof(dp));
    // std::cout<<rodCuttingMemo(rodlen, prices, rodlen.size(), n);
    // std::cout<<rodCuttingDp(rodlen, prices, rodlen.size(), n);
    std::cout<<rodCuttingOpt(rodlen, prices, rodlen.size(), n);
}
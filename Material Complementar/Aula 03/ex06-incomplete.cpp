#include <iostream>
#include <vector>

using namespace std;

int knapsack(int capacidade, vector<int>& pesos, vector<int>& valores, int N) {
    vector<vector<int>> dp(N + 1, vector<int>(capacidade + 1, 0));
    for (int i=1; i <= N; i++) {
        for (int w=1; w <= capacidade; w++) {
            if (pesos[i-1] <= w) {
                dp[i][w] = max(valores[i-1] + dp[i-1][w-pesos[i-1]], dp[i-1][w]);
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }
    return dp[N][capacidade];
}

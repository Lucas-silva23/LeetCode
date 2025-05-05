#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

// Tabulation
// Formula: 2 * dp[i-1] + dp[i-3]

class Solution {
    public:
        const long mod = 1e9 + 7;
        int numTilings(int n) {
            if(n <= 1) return 1;
            if(n == 2) return 2;
            if(n == 3) return 5;
            vector<int> dp(n+1,0);
            dp[0] = 1, dp[1] = 1, dp[2] = 2, dp[3] = 5;
            for(int i=4;i<=n;i++){
                dp[i] = (2 * dp[i-1] + long(dp[i-3])) % mod;
            }
    
            return dp[n];
        }
    };

    int main(){
        Solution solution;
        int n = 9;

        cout << solution.numTilings(n) << endl;
        
        return 0;
    
    }
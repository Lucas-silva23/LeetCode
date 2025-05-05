#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            unordered_map<int, int> count;
            int result = 0;
    
            for (auto& d : dominoes) {
                int a = d[0], b = d[1];
                int key = a < b ? a * 10 + b : b * 10 + a;
                result += count[key]++;
            }
    
            return result;
        }
    };

    int main(){
        Solution solution;
    
        vector<vector<int>> vec = {{1,2},{2,1},{3,4},{5,6}};
    
        int result = solution.numEquivDominoPairs(vec);
    
        cout << result << endl;
        
        return 0;
    }
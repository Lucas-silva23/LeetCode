#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            unordered_map<int,int> map;
            int cont = 0;
            for(int i=0;i<dominoes.size();i++){
                int value1 = dominoes[i][0];
                int value2 = dominoes[i][1];
                int key = (value1 < value2) ? value1 * 10 + value2 : value2 * 10 + value1;
                cont += map[key]++;
            }
    
            return cont;
        }
    };

    int main(){
        Solution solution;
    
        vector<vector<int>> vec = {{1,2},{2,1},{3,4},{5,6}};
    
        int result = solution.numEquivDominoPairs(vec);
    
        cout << result << endl;
        
        return 0;
    }
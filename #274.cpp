#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Solution {
    public:
        int hIndex(vector<int>& citations) {
            stable_sort(citations.begin(), citations.end());
            for(int i=0;i<citations.size();i++){
                if(citations[i] >= citations.size()-i) return citations.size()-i;
            }
    
            return 0;
        }
    };

    int main(){
        Solution solution;
    
        vector<int> vec = {3,0,6,1,5};
    
        int result = solution.hIndex(vec);
        
        cout << result << endl;
        
        return 0;
    }
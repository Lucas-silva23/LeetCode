#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int value;
            unordered_map<int,int> map;
            vector<int> res;
    
            for(int i=0;i<nums.size();i++){
                value = target - nums[i];
                if(map.find(value) != NULL){
                    res.push_back(map[value]);
                    res.push_back(i);
                    return res;
                }
    
                map[nums[i]] = i;
            }
    
            return res;
        }
    };

int main(){
    Solution solution;

    vector<int> vec = {2,7,11,15};

    vector<int> result = solution.twoSum(vec, 9);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    

    return 0;
}
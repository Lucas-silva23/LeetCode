#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Solution {
    public:
        int majorityElement(vector<int>& nums) {
        // Time Complexity: O(n)
        // Space Complexity: O(n)
        //     unordered_map<int,int> map;
        //     for(int num : nums){
        //         map[num]++;
        //         if(map[num] > (nums.size()/2))
        //             return num;
        //     }
    
        //     return 0;
        // }
        
        // Time Complexity: O(n logn)
        // Space Complexity: O(1)
        stable_sort(nums.begin(),nums.end());
        int cont = 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 0) return 0;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == nums[i]) cont++;
            if(cont >= (nums.size()/2)) return nums[i];
        }
    
        return 0;
        }
    };

    int main(){
        Solution solution;
    
        vector<int> nums = {12,12, 12, 12, 12, 345,2,6,7896};
    
        cout << solution.majorityElement(nums) << endl;
    
        return 0;
    }
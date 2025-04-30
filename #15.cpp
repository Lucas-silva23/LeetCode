#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            int i = 0;
            int target;
    
            stable_sort(nums.begin(), nums.end());
            vector<vector<int>> res;
    
            for(int i=0;i<nums.size() - 2;i++){
                if(i > 0 && nums[i] == nums[i-1]){
                    continue;
                }
                
                int left = i+1;
                int right = nums.size() - 1;  
    
                while(left < right){
                    target = nums[i] + nums[left] + nums[right];
                    if(target == 0){
                        vector<int> aux = {nums[i], nums[left], nums[right]};
                        res.push_back(aux);
                        left++;
    
                        while(nums[left] == nums[left-1] && left < right)
                            left++;
                    }
                    else if(target > 0){
                        right--;
                    } else{
                        left++;
                    }
                }
            }
    
            return res; 
        }
};



int main() {
    Solution sol;

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = sol.threeSum(nums);

    for (const auto& triplet : result) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); ++i) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}

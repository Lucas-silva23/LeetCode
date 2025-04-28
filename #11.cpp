#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
    public:
        int maxArea(vector<int>& height) {
            int left = 0;
            int right = height.size() - 1;
            int best = 0;
            
            bool l_higher;
    
            while(left < right){
                if(height[left] <= height[right]){
                    l_higher = 0;
                }else{
                    l_higher = 1;
                }
    
                int sum = 0;
                if(!l_higher){
                    sum = height[left] * (right - left);
                    left++;
                } else{
                    sum = height[right] * (right - left);
                    right--;
                }
    
                if(sum > best){
                    best = sum;
                }
            }
    
            return best;
        }
    };

    int main(){
        Solution solution;
    
        vector<int> height = {1,8,6,2,5,4,8,3,7};
    
        cout << solution.maxArea(height) << endl;
    
        return 0;
    }
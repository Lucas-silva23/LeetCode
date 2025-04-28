#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            int left = 0;
            int right = numbers.size() - 1;
            vector<int> vec;
    
            while(left < right){
                int sum = numbers[left] + numbers[right];
                if(sum == target){
                    vec.push_back(left+1);
                    vec.push_back(right+1);
                    return vec;
                }
                else if(sum > target){
                    right--;
                } 
                else if(sum < target){
                    left++;
                }
            }
    
            return vec;
        }
    };


    int main(){
        Solution solution;
    
        vector<int> vec{2,7,11,15};
        int target = 9;
        
        vector<int> res = solution.twoSum(vec,target);
        cout << "Vector: [";
        for(int i=0;i<res.size();i++){
            cout << res[i] << " ";
        }
        cout << "]" << endl;
    
        return 0;
    }
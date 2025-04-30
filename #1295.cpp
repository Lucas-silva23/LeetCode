#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int cont; 
            double valor;
            int res = 0;
    
            for(int i=0;i<nums.size();i++){
                cont = 0;
                valor = nums[i];
                // cout << "Valor " << i << " : " << valor << endl;
                while(valor >= 1){
                    //cout << "Valor " << i << " : " << valor << endl;
                    cont++;
                    valor = valor/10;
                }
                
                // cout << "Cont: " << cont << endl;
                if(cont % 2 == 0){
                    res++;
                }
                //cout << "RES: " << res << endl;
            }
    
            return res;
        }
    };


int main(){
    Solution solution;

    vector<int> nums = {12,345,2,6,7896};

    cout << solution.findNumbers(nums) << endl;

    return 0;
}
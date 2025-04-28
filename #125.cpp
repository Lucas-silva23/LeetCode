#include<iostream>
#include<string>
using namespace std;

class Solution {
    public:
        bool isPalindrome(string s) {
            int size = s.length();
            for(int i=0;i<size;){
                if(!isalnum(s[i]) || s[i] == ' '){
                    s.erase(i,1);
                    size--;
                } else{
                    i++;
                }
            } 
    
            string sLower;
    
            for(char c : s){
                sLower += tolower(c);
            }  

            cout << sLower << endl;
    
            int left = 0;
            int right = size - 1;
            while(left < right){
                if(sLower[left] != sLower[right])
                    return false;
                
                left++;
                right--;
            }
    
            return true;
        }
};

int main(){
    Solution solution;

    string palindrome = "A man, a plan, a canal: Panama";

    cout << solution.isPalindrome(palindrome) << endl;

    return 0;
}
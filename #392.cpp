#include<iostream>
#include<string>
using namespace std;

class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int i_x = 0;
            int i_y = 0;
    
            int size_x = s.length();
            int size_y = t.length();
    
            int cont = 0;
            
            while(i_x < size_x && i_y < size_y){
                if(s[i_x] == s[i_y]){
                    i_x++;
                    i_y++;
                    cont++;
                }
                else{
                    i_y++;
                }
            }
            
            return cont == size_x;
        }
    };

    int main(){
        Solution solution;
    
        string a = "axc";
        string b = "ahbgdc";
        
        cout << solution.isSubsequence(a,b) << endl;
        
    
        return 0;
    }
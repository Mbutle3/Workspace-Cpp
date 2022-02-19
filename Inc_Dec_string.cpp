# include <iostream>
# include <vector>
using namespace std;

class Solution {
public:
    string sortString(string s) {
    std::vector<int> vec(26,0);
        for (char c: s) vec[c - 'a'] ++; 
        string new_string = ""; 
        int pivot = 0 ; 
        
        while (new_string.size() < s.size()) {
           for (int i = 0; i < 26; i++) {
            int j = pivot == 0 ? i : 25 - i;
            if (vec[j] > 0){
              vec[j] -= 1; 
              new_string.push_back('a' + j);
            }
          }
          pivot = 1 - pivot;
        }
        return new_string;  
    }
};
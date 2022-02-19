using namespace std;
#include <vector>
#include <iostream>

class Solution {
public:
        string restoreString(string s, vector<int>& indices) {
            //saving old string (s) to new_string 
            string new_string = s;
            int counter = 0;
            int i = 0;
        
            //iterate  indices array 
            while (counter < indices.size())
            {
                new_string [indices.at(i)] = s[i];
                counter++;
                i++;
            }
        return new_string;    
    }
};
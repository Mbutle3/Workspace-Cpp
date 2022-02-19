#include <iostream> //Utilize I/O
#include <vector> //Utilize vectors 
#include <climits> //Utilize INT_MAX & INT_MIN
using namespace std;

class Solution {
public:
 double average(vector<int>& salary) {
        
        
        double sum = 0;
        int max_value = INT_MIN;
        int min_value = INT_MAX;
     
        for(int i = 0; i < salary.size(); i ++)
        {  
            max_value = max(max_value, salary.at(i));
            min_value = min(min_value, salary.at(i));
            sum += salary.at(i);
        }
     
        return (sum - max_value - min_value) / (salary.size() - 2);
    }
};
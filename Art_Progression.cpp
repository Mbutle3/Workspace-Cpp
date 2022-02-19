#include <iostream> //Utilize I/O
#include <vector> //Utilize vector
#include <functional> //Utilize sort method
using namespace std;


class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        sort(begin(arr), end(arr));
        int difference = arr[1] - arr[0];
            for (int i = 1; i < arr.size(); i++)
            {
                if (arr[i] - arr[i - 1] != difference)
              {
                  return false;
              }
            }
    return true;     
    }
};
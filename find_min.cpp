#include <iostream>
#include <vector>
using namespace std;



int find_min(vector<int>& vec)
{
    int min = vec.at(0);
    for (int i = 1; i < vec.size(); i ++)
    {
        if (vec.at(i) < min)
        {
            min = vec.at(i);
        }
    }
    return min;
};

int main(){
    vector <int> test_vec;
    
    cout << "\n" << "Enter  \nThen type a char when complete"<< "\n" <<"Input: ";
   
    int x;
    while(cin >> x )
    {
        test_vec.push_back(x);
    };
    

    cout << "\n" << "Min element: " << find_min(test_vec) << "\n";

    return 0;
}

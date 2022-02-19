#include <iostream>
# include <cmath> //Utilize Math Functions
using namespace std;

string even_or_odd(int& num)
{

        if (abs(num) % 2 == 1)
        {
            return "odd"; 
        }
        else
        {
            return "even";
        }
}

int main ()
{
    int user_num; 
    cout <<"\nenter a number: ";
    cin >> user_num;
    cout<<user_num << " is ";
    cout << even_or_odd(user_num) << endl;
    return 0;
}
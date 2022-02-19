#include <vector>
#include <iostream>
#include <functional> //Utilize sort method
using namespace std;


int main ()
{
vector <int> test_vec;

/* Input Array*/
test_vec.push_back(10);
test_vec.push_back(20);
test_vec.push_back(30);
test_vec.push_back(40);
test_vec.push_back(50);
int total = 0;
cout << "\nOriginal Vector: "; 
for (int i = 0; i < test_vec.size(); i ++)
{
    cout<< test_vec.at(i) << " ";
    total+=test_vec.at(i);
}
cout << "\nTotal of vector values: " << total; 
cout << endl <<"\n";
return 0;
}
//
//  main.cpp
//  In_Class_Code
//
//  Created by Michael Butler on 1/31/22.
//

//Program will add the total of all the numbers in the array using recursion

#include <iostream>

int sum (int a[], int n)
{
    if (n ==0)
    {
        return 0;
    }
    else return sum(a, n-1) + a[n-1];
}

int main(int argc, const char * argv[])
{
    int a[] = {2,3,4,5,6,7};
    std::cout << sum(a,sizeof(a)/sizeof(int));
    std::cout << "\n";
    return 0;
}


//
//  main.cpp
//  In_Class_Code
//
//  Created by Michael Butler on 1/31/22.
//

//Program will find the smallest number in the array using recursion

#include <iostream>

//int sum (int a[], int n)
//{
//    if (n ==0)
//    {
//        return 0;
//    }
//    else return sum(a, n-1) + a[n-1];
//}

int find_smallest (int a[], int n)
{
    //Better way of writing the same solution
    if (n == 1)
        return a[0];
    return std::min(find_smallest(a,n-1), a[n-1]);
    
    /*
    int results = find_smallest(a, n - 1);
    if (results < a[n -1])
    {
        return results;
    }
    else return a[n-1];
    */
}
int main(int argc, const char * argv[])
{
    int a[] = {3,6,7,1,10,-2,3};
    std::cout << find_smallest(a,sizeof(a)/sizeof(int));
    std::cout << "\n";
    return 0;
}


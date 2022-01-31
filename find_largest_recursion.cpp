int find_greatest (int a[], int n)
{
    if (n == 1)
        return a[0];
    return std::max(find_greatest(a,n-1), a[n-1]);
}


int main(int argc, const char * argv[])
{
    int a[] = {3,6,7,1,10,-2,3};
    std::cout << "Greatest Number In Array: ";
    std::cout << find_greatest(a,sizeof(a)/sizeof(int));
    std::cout << "\n";
    return 0;
}


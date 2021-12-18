#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    int posOfRightMostDiffBit(int m, int n)
    {
        int x=m^n;
        return log2(x & -x) + 1;
    }
};

int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}  

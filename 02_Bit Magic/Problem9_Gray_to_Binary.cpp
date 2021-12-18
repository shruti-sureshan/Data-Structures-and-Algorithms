
#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
    int res = n;
    while (n > 0)
    {
        n >>= 1;
        res ^= n;
    }
    return res;
        
    }
};


int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

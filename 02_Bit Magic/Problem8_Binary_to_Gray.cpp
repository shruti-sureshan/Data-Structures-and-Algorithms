
#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //  Function to find the gray code of given number n
    int greyConverter(int n)
    {
        return n ^ (n >> 1);
    }
};


int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin >> n;//input n
        Solution ob;
        //calling greyConverter() function
        cout << ob.greyConverter(n) << endl;
    }
}

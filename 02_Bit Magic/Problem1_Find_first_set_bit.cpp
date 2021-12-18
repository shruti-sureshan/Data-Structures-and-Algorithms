#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
     return log2(n & -n) + 1; //Take 2's complement of the no, do bitwise & of the no and its 2's complement. Take log2 of the result and add 1 to it.
    }
};


int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

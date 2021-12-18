#include<iostream>
using namespace std;


class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        if(n&(n>>1))
            return false;
        else
            return true;
    }
};

int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}

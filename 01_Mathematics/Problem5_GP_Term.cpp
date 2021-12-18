
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



//User function Template for C++

class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        //Your code here
        double r=((double)B)/A; 
        // Nth term is given by a(r^(N-1))
        return (A*pow(r,N-1)); 
        
    }
};



int main()
{
    int T; //testcases total
    cin>>T;//input the testcases

    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        Solution ob;
        cout<<floor(ob.termOfGP(A,B,N))<<endl;
    }

    return 0;
}


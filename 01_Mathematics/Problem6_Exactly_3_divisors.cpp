// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
     // function to check if n is prime
    bool isPrime(int n)
    {
        if(n<=1)
            return false;
        
        for(int i=2;i<=sqrt(n);i++)
            if(n%i==0)
                return false;
        
        return true ;
    }
    
    int exactly3Divisors(int N)
    {
        //Your code here
          int counter=0; 
        N = sqrt(N); 
        //running a loop from 1 to sqrt(N)     
        for(int i=1;i<=N;i++) 
        {
            // A number N only has 3 divisors if it is a  
            // perfect square and its square  root is a prime number, 
            // and we know the number of perfect squares less than N which 
            // is sqrt(N), so just checking if i is prime or not
            if(isPrime(i)) 
                counter++;
        }
        return counter;

    }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends

//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int min, max;
    	int i;
    	if(N%2==0){
    	    if(A[0]>A[1]){
    	        max=A[0];
    	        min=A[1];
    	    }
    	    else{
    	        max=A[1];
    	        min=A[0];
    	    }
    	    i=2;
    	}
    	else{
    	    max=A[0];
    	    min=A[0];
    	i=1;
    	    
    	}
    	
    	while(i<N-1){
    	    if(A[i]>A[i+1]){
    	        if(A[i]>max)
    	        max=A[i];
    	        
    	        
    	        if(A[i+1]<min){
    	        min=A[i+1];
    	    }
    	    }
    	    else{
    	        if(A[i+1]>max)
    	        max=A[i+1];
    	        if(A[i]<min)
    	        min=A[i];
    	    }
    	    i=i+2;
    	}
    	int s=max+min;
    	return s;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends

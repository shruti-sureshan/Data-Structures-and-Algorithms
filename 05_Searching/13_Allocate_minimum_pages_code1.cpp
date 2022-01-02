//input: a[]={10,20,30,40}      k=2 (#students)
//output:60

//Minimize the maximum pages allocated

//Only contiguous pages can be allocated

/*
Naive sol:
x0 | x1 | x2 |...xi-1 | xi |...xn-1
We need to choose (k-1) cuts out of (n-1) cuts
Total ways:(n-1)C(k-1)
*/


#include <bits/stdc++.h> 
using namespace std; 

int sum(int arr[],int b, int e){
    int s=0;
    for(int i=b;i<=e;i++)
        s+=arr[i];
    return s;
}

int minPages(int arr[],int n, int k){
    if(k==1)
        return sum(arr,0,n-1);
    if(n==1)
        return arr[0];
    int res=INT_MAX;
    for(int i=1;i<n;i++){
        res=min(res,max(minPages(arr,i,k-1),sum(arr,i,n-1)));
    }
    return res;
}

int main() 
{
    int arr[]={10,20,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    
    cout<<minPages(arr,n,k);
} 



//Takes Exponential time
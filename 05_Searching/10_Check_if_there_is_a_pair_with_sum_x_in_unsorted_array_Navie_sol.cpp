#include <iostream>
using namespace std;

int main() {
    int n=5;
	int a[n]={1,5,8,2,9};
	int x=17;
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){
	        if(a[i]+a[j]==x){
	            cout<<"Yes";
	        }
	    }
	}
	
	return 0;
}

//can be optimized using hashing or else sort the array and use the approach for sorted array
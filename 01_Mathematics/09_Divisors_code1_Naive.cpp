#include <iostream>
#include <limits.h>
using namespace std;

 void printDivisors(int n)
{
	for(int i=1;i<=n;i++){
	    if(n%i==0)
	        cout<<i<<" ";
	}
}

int main() {
    
    	int n = 15;
    	
    	printDivisors(n);
    	
    	return 0;
}

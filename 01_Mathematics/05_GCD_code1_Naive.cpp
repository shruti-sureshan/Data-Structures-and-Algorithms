#include <iostream>
#include <limits.h>
using namespace std;

 int gcd(int a, int b)
{
	int res=min(a,b);
	while(res>0){
	    if(a%res==0 && b%res==0)
	        break;
	    res--;
	}
	return res;
}

int main() {
    
    	int a = 4;
      int b = 6;
    	
    	cout<<gcd(a, b);
    	
    	return 0;
}

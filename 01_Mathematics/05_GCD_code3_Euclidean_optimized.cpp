#include <iostream>
#include <limits.h>
using namespace std;

 int gcd(int a, int b)
{
	if(b==0)
		return a;

	return gcd(b, a % b);
}

int main() {
    
    	int a = 4, b = 6;
    	
    	cout<<gcd(a, b);
    	
    	return 0;
}

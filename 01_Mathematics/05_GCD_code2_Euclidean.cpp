#include <iostream>
#include <limits.h>
using namespace std;

 int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a; 
	}

	return a;
}

int main() {
    
    	int a = 4, b = 6;
    	
    	cout<<gcd(a, b);
    	
    	return 0;
}

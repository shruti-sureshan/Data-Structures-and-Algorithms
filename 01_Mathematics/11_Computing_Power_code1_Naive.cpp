#include <iostream>
#include <limits.h>
using namespace std;

 int power(int x, int n)
{
	int res=1;
	for(int i=0;i<n;i++){
	    res=res*x;
	}
	return res;
}
int main() {
    
    int x = 3, n = 5;

	cout<<power(x, n);
}

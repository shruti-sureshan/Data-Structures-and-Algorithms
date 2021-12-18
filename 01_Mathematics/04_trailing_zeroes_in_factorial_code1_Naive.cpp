//Naive approach - This can lead to overflow for large input values


#include <iostream>
#include <limits.h>
using namespace std;

 int countTrailingZeros(int n)
{
	int res = 0;
int fact=1;
for(int i=2;i<=n;i++){
    fact=fact*i;
}

while(fact%10==0){
    res++;
    fact=fact/10;
}
	
	return res;
}
int main() {
    
    	int number = 10;
    	
    	cout<<countTrailingZeros(number);
    	
    	return 0;
}

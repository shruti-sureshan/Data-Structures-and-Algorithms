#include <iostream>
using namespace std;

class Solution{
  public:
    int digitalRoot(int n)
    {
   if(n<10)
   return n;
   n=digitalRoot(n/10)+(n%10);
   return n < 10 ? n : digitalRoot(n);
   }
};

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl; 
	}
	return 0;
} 

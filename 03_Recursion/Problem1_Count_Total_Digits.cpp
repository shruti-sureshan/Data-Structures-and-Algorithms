#include <iostream>
using namespace std;

class Solution{
  public:
    int countDigits(int n)
    {
  if(n<10)
   return 1;
   return countDigits(n/10)+1;
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
	    cout<<obj.countDigits(n)<<endl;
	}
	return 0;
}

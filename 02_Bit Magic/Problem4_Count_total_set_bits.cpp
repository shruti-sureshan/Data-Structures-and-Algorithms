#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:

    int findLargestPower(int n)
{
    int x = 0;
    while ((1 << x) <= n)
        x++;
    return x - 1;
}
    
    
    int countSetBits(int n)
    {

  if (n <= 1)
        return n;
    int x = findLargestPower(n);
    return (x * pow(2, (x - 1))) + (n - pow(2, x) + 1) + countSetBits(n - pow(2, x));
    }
};



int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

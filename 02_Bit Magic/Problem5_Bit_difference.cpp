#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int n=a^b;
        unsigned int count = 0; 
       while (n) { 
          n &= (n - 1); 
          count++; 
       } 
      return count; 
        
    }
};


int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}

//Given a temperature in celsius C. You need to convert the given temperature to Fahrenheit.

//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



//User function Template for C++

class Solution{
    public:
    
    //You need to complete this function
    double cToF(int C)
    {
        //Your code here
        double f=(C*9/5)+32;
        return f;
    }
};





int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        Solution ob;
        cout << floor(ob.cToF(C)) << endl; //print the output
    }
    return 0;
}  

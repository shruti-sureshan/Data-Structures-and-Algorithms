//You are given an interger I, find the absolute value of the interger I.


#include <bits/stdc++.h>
using namespace std;


// User function Template for C++

class Solution{
    public:
        int absolute(int I) {
        // Your code goes here
    return abs(I);
    }

};

int main() {
    int T;    // number of testcases
    cin >> T; // input number of testcases
    while (T--) {
        int I;
        cin >> I;
        Solution ob;
        cout << ob.absolute(I) << endl; // print the output
    }
    return 0;
}  

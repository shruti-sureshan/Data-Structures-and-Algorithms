#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;



int repeat(int a[], int n)
{
sort(a,a+n);
for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1])
        return a[i];
}


}


int main() {
    

 int arr[] = {0, 2, 1, 3, 2, 2}, n= 6;

 cout << repeat(arr, n);

	return 0;
}



//Time=O(nlogn) Space=O(1)

//But this approach modifies the original array
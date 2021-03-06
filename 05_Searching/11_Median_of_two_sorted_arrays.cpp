//input: a1[]=[10,20,30,40,50], a2[]=[5,15,25,35,45]
//output: 27.5      as-- {5,10,15,20,25,30,35,40,45,50} --- mid elements are 25 and 30 so median =(25+30)/2


//Naive sol: put elements of ai and a2 in a new array temp[] and then sort it. Time=O((n1+n2)*log(n1+n2))

//Better apporach using Binary search: Time=O(log n1) where n1<=n2

#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;



double getMed(int a1[], int a2[], int n1, int n2)
{
	int begin1 = 0, end1 = n1;

	while(begin1 < end1)
	{
		int i1 = (begin1 + end1) / 2;
		int i2 = (n1 + n2 + 1) / 2 - i1;
		
		/*
		min1=Min element in RHS of a1
		max1=Max elelement in LHS of a1
		min2=Min element in RHS of a2
		max2=Max elelement in LHS of a2
		*/
		
		int min1 = (i1 == n1)?INT_MAX:a1[i1];	//check if there is nothing on RHS        
		int max1 = (i1 == 0)?INT_MIN:a1[i1 - 1];      //check if there is nothing on LHS  
		
		int min2 = (i2 == n2)?INT_MAX:a2[i2];		
		int max2 = (i2 == 0)?INT_MIN:a2[i2 - 1];        

		if(max1 <= min2 && max2 <= min1)
		{
			if((n1 + n2) % 2 == 0)
				return ((double)max(max1, max2) + min(min1, min2)) / 2;
			else
				return (double)max(max1, max2);
		}
		else if(max1 > min2)
			end1 = i1 - 1;
		else 
			begin1 = i1 + 1;
	}
}


int main() {
    

 int a1[] = {10, 20, 30, 40, 50}, n1 = 5, a2[] = {5, 15, 25, 35, 45}, n2 = 5;
		
cout << getMed(a1, a2, n1, n2);

	return 0;
}

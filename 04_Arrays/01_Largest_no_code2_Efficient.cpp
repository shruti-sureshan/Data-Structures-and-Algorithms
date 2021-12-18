#include <iostream>
using namespace std;

int myfunc(int a[], int n){
    int max=0;
    for(int i=1;i<n;i++){
        if(a[i]>=a[max]){
            max=i;
        }
 
    }
        return max;   
}


int main() {
	int a[]={5,7,10,30,8};
	int n = sizeof(a) / sizeof(a[0]);
	cout<<myfunc(a,n);
	return 0;
}
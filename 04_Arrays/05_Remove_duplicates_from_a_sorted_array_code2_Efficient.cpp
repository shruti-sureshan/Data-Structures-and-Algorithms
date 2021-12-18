#include <iostream>
using namespace std;

int myfunc(int a[], int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[res-1]){
            a[res]=a[i];
            res++;
        }
    }
    return res;
}

int main() {
	int a[]={1,2,2,3,3,3};
	cout<<myfunc(a,6);
	return 0;
}
#include <iostream>
using namespace std;

bool mysort(int a[], int n){
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1])
            return false;
    }
    return true;
}

int main() {
	//code
	int a[]={1,2,2,4};
	cout<<mysort(a,4);
	return 0;
}
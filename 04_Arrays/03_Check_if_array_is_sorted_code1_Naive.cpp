#include <iostream>
using namespace std;

bool myfunc(int a[], int n){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[j]<a[i]){
            return false;
        }
    }
}
return true;
}


int main() {
	int a[]={1,2,2,3,4};
	int n = sizeof(a) / sizeof(a[0]);
    cout<<myfunc(a,n);
	return 0;
}
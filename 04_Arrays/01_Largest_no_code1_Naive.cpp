#include <iostream>
using namespace std;

int myfunc(int a[], int n){
for(int i=0;i<n;i++){
    bool flag=true;
    for(int j=0;j<n;j++){
        if(a[j]>a[i]){
            flag=false;
            break;
        }
    }
    if(flag==true)
        return i;
}
return -1;
}


int main() {
	int a[]={5,7,10,30,8};
    int n = sizeof(a) / sizeof(a[0]);
	cout<<myfunc(a,n);
	return 0;
}
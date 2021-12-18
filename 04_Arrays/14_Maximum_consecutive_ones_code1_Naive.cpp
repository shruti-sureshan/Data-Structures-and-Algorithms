#include <iostream>
using namespace std;

int myfunc(bool a[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=i;i<n;j++){
            if(a[j]==1)
            {
                c++;
            }
            else{
                break;
            }
        }
       res=max(res,c); 
    }
    return res;
}

int main() {
	bool a[]={1,0,1,1,1,0,1,1};
	cout<<myfunc(a,8);
	return 0;
}
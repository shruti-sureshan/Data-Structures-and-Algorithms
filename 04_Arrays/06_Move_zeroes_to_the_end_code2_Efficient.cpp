#include <iostream>
using namespace std;

void myfunc(int a[],int n){
    int c=0;
    for(int i=0;i<n;i++){
      if(a[i]!=0){
          swap(a[i],a[c]);
          c++;
      }
    }
   for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}

int main() {
	int a[]={10,5,0,0,8,0,9,0};
	myfunc(a,8);
	return 0;
}

#include<iostream>
using namespace std;

int myfunc(int a[],int n){

for(int i=0;i<n;i++){
    if(a[i]==0){
        for(int j=i+1;j<n;j++){
            if(a[j]!=0){
                swap(a[i],a[j]);
                break;}
        }
    }
}
           for(int i = 0; i < n; i++)
       {
       		cout<<a[i]<<" ";
       }
}



int main(){
    int a[]={1,0,2,0,0,3};
    int n=6;
    myfunc(a,n);

    return 0;
}

#include<iostream>
using namespace std;

int myfunc(int a[],int n){
 int max=0;
 for(int i=1;i<n;i++){
     if(a[i]>a[max]){
         max=i;
     }
 }
return max;

}


int myfunc1(int a[],int n){
    int l=myfunc(a,3);
 int max=-1;
 for(int i=1;i<n;i++){
     if(a[i]!=a[l]){
     if(max==-1){
         max=i;
     }
     else if(a[i]>a[max])
     max=i;
     }
 }
return max;

}



int main(){
    int a[]={7,8,10};
    cout<<myfunc1(a,3);
    return 0;
}

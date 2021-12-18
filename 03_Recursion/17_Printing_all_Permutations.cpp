#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void swap(char *x,char*y){
        int temp = *x;
    *x = *y;
    *y = temp;

}

void permute(string s, int i){
    if(i==s.length()-1){
        std::cout<<s<<" ";
    }
    
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        permute(s,i+1);
        swap(s[i],s[j]);
    }
}

int main() {
	//code
	permute("abc",0);
	return 0;
}

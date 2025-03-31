#include<bits/stdc++.h>
using namespace std;
int sumToN(int n){
    if(n==1){
        return 1;
    }
    return n+sumToN(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int res=sumToN(n);
    cout<<res;
}
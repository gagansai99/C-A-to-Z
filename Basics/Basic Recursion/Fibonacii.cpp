#include<bits/stdc++.h>
using namespace std;
int fibbo(int n){
    if(n==1||n==0){
        return n;
    }
    return fibbo(n-1)+fibbo(n-2);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int ans=fibbo(n);
    cout<<"The "<<n<<"th Fibonacci number is "<<ans;
}
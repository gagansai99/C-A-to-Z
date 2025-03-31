#include<bits/stdc++.h>
using namespace std;
int factorialOfN(int n){
    if(n==1){
        return 1;
    }
    return n*factorialOfN(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int res=factorialOfN(n);
    cout<<res;
}
#include<bits/stdc++.h>
using namespace std;
void nameCall(int t,int n){
    if(t==n){
        cout<<t<<endl;
    }
    else{
        nameCall(t+1,n);
        cout<<t<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    nameCall(1,n);
}
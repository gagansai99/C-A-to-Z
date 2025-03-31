#include<bits/stdc++.h>
using namespace std;
void nameCall(int t,int n){
    if(t==n){
        cout<<"Gagan"<<endl;
    }
    else{
        cout<<"Gagan"<<endl;
        nameCall(t+1,n);
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    nameCall(1,n);
}
#include<bits/stdc++.h>
using namespace std;
void nameCall(int n){
    if(n==1){
        cout<<n<<endl;
    }
    else{
        nameCall(n-1);
        cout<<n<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    nameCall(n);
}
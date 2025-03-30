#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cout<<"Enter the value of n:";
    cin>>n;
    int temp=n;
    while(temp>0){
        c+=1;
        temp/=10;
    }
    cout<<"The number of digits in "<<n<<" is "<<c;
}
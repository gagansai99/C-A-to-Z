#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp,sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    temp=n;
    while(temp>0){
        int rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    cout<<"Reverse of "<<n<<" is "<<sum;
}
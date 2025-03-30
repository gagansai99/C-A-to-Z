#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    int i=max(num1,num2);
    int lcm;
    while(true){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
        i++;
    }
    cout<<"The LCM of "<<num1<<" and "<<num2<<" is "<<lcm;
}
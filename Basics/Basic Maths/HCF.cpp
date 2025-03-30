#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    int hcf=1;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    for(int i=1;i<=min(num1,num2);i++){
        if(num1%i==0 &&num2%i==0){
            hcf=i;
        }
    }
    cout<<"HCF of both the numbers is "<<hcf;
}
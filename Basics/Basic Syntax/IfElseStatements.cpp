#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter the valid age:";
    cin>>age;
    if(age>18){
        cout<<"You are adult";
    }
    else if(age==18){
        cout<<"You are almost adult";
    }
    else{
        cout<<"You are not adult";
    }
}
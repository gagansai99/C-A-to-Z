#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string> m;
    m[1]="one";
    m[2]="two";
    m[3]="three";
    m[4]="four";
    m[5]="five";
    cout<<m[3]<<endl;
    m[2]="2";
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    if(m.find(6)!=m.end()){
        cout<<"6 is present in map"<<endl;
    }
    else{
        cout<<"6 is not present in map"<<endl;
    }
    m.erase(2);
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
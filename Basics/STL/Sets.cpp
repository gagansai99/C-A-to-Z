#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    s.erase(2);
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;

    if(s.find(2)!=s.end()){
        cout<<"2 is present in set"<<endl;
    }
    else{
        cout<<"2 is not present in set"<<endl;
    }
}
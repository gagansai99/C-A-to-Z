#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={1,2,3};
    for(auto num:v1){
        cout<<num<<" ";
    }
    cout<<endl;
    vector<int> v2(5,9);
    for(auto num:v2){
        cout<<num<<" ";
    }
    cout<<endl;
    v1.push_back(4);
    v1.push_back(5);
    for(auto num:v1){
        cout<<num<<" ";
    }
    cout<<endl;
    v1.insert(v1.begin()+1,2);
    for(auto num:v1){
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<count(v1.begin(),v1.end(),2);
    cout<<endl;
    // cout<<v1.begin()<<" "<<v1.end()<<endl;
    cout<<*(v1.begin())<<" "<<*(v1.end()-1)<<endl;
    v1.pop_back();
    v1.erase(v1.begin()+1);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={11,2,4,3,2,5,3,11,2,4,3,5,3,3,2,11,2,1,3,54,2,1,1,5,5,5,6,5};
    unordered_map<int,int> om;
    map<int,int> m;
    for(auto it:arr){
        om[it]++;
        m[it]++;
    }
    cout<<"Using unordered map"<<endl;
    for(auto it:om){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<"Using ordered map"<<endl;
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
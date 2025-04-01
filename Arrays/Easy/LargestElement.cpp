#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    int maxi=INT_MIN;
    for(auto i:v){
        maxi=max(maxi,i);
    }
    cout<<"Maximum value is "<<maxi<<endl;
}
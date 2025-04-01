#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,9};
    int n=arr.size();
    int key;
    cout<<"Enter any number to be searched:";
    cin>>key;
    int pos=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<"Number not found in array.";
    }
    else{
        cout<<"Number found at position "<<pos+1<<" in array.";
    }
    cout<<endl;
    //Using find method
    auto it=find(arr.begin(),arr.end(),key);//If not found it will return the size of array and using auto is mandatory because we are using iterator
    cout<<distance(arr.begin(),it);
}
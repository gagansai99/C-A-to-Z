#include<bits/stdc++.h>
using namespace std;
bool palindrome(string arr,int i,int j){
    if(i>j){
        return true;
    }
    else if(arr[i]!=arr[j]){
        return false;
    }
    
   return palindrome(arr,i+1,j-1);
}
int main(){
    string str="raceacar";
    int i=0,j=str.size()-1;
    bool res=palindrome(str,i,j);
    cout<<res;
}
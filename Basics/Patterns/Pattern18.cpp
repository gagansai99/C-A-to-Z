#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        int ch=(int)'E'-i+1;
        for(int j=1;j<=i;j++){
            cout<<(char)ch<<" ";
            ch++;
        }
        cout<<endl;
    }

}
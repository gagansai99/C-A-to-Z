#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        if(i<=n){
            for(int j=1;j<=n-i+1;j++){
                cout<<"*";
            }
            for(int j=1;j<=2*i-2;j++){
                cout<<" ";
            }
            for(int j=1;j<=n-i+1;j++){
                cout<<"*";
            }

        }
        
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(j<=i||j>=2*n-i+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
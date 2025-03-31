#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int c=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<c<<" ";
        if(c==0){
            c=1;
        }
        else{
            c=0;
        }
    }
    cout<<endl;
}
}
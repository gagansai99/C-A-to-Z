#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        int c=1;
        for(int j=1;j<=2*n;j++){
            if(j<=i){
                cout<<c<<" ";
                c++;
            }
            else if(j>=2*n-i+1){
                c--;
                cout<<c<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}
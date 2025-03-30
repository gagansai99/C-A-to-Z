#include<bits/stdc++.h>
using namespace std;
void passByValue(int &n){//Getting the original value using & 
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}
int main(){
    int n=10;
    passByValue(n);
    cout<<n<<endl;
}
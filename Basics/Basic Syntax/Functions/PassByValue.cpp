#include<bits/stdc++.h>
using namespace std;
void passByValue(int n){
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}
int main(){
    int n=10;
    passByValue(n);
    cout<<n<<endl;//Original value remains same but copy values of n will be changed
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << endl; // prints 10
    q.pop();
    cout << q.front() << endl;//prints 20
    cout << q.back() << endl; // prints 30
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<q.empty();
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();

    }
}

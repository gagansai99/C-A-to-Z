#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl; // prints 30
    st.pop();
    cout << st.top() << endl; // prints 20
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.empty();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }
}

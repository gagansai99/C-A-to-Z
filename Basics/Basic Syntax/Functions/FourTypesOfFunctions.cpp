#include<bits/stdc++.h>
using namespace std;
//void and non-parameterized function defination
void greeting(){
    cout << "Hello!" << endl;
}
void greet(string name){
    cout << "Hello "<<name<<endl;
}
int sum(int a, int b){
    return a+b;
}
string nameReturn(){
    return "Jhatin";
}
int main(){
    //void and non-parameterized function call
    greeting();
    string name1="Gagan";
    //void and parameterized function call
    greet(name1);
    int a=10,b=20;
    //return type and parameterized function call
    int result=sum(a,b);
    cout<<result;
    cout<<endl;
    //return type and non-parameterized function call
    string name2=nameReturn();
    cout<<name2;
}
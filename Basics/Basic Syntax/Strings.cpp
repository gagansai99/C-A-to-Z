#include <iostream>
using namespace std;
int main()
{
    string name="Gagam";
    cout<<name<<"\n";
    int l=name.size();
    cout<<"Length of string is "<<l<<"\n";
    name[l-1]='n';//Only use '' not "" to manipulate the characters of the string
    cout<<name;//Output: Gagan

    return 0;
}
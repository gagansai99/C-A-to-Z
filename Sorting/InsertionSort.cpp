#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={53,22,13,43,65,34,54,65,32,14,89,3,234,154};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
            }
            arr[j+1]=key;
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
        }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={53,22,13,43,65,34,54,65,32,14,89,3,234,154};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0])-1;i++){
        for(int j=0;j<=sizeof(arr)/sizeof(arr[0])-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
    }
}
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
        }
}

#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int i,int j){
    if(i>j){
        return;
    }
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    reverseArray(arr,i+1,j-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int i=0,j=(sizeof(arr))/(sizeof(arr[0]))-1;
    reverseArray(arr,i,j);
    for(int k=0;k<sizeof(arr)/(sizeof(arr[0]));k++){
        cout<<arr[k]<<" ";
    }
}
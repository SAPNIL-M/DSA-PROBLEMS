#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void revarr(int bar[],int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        swap(bar[start],bar[end]);
        start++;
        end--;
    }
}


int main(){
    int arr[]={3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    revarr(arr,size);
    for(int i =0;i<size;i++){
        cout<<arr[i];
    }
}
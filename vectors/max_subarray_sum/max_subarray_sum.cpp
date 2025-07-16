#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={-2,1,-3,4,-1,2,1,-5,4};
    int size = vec.size();
    int csum=0;
    int msum=INT_MIN;
    for(int i=0;i<size;i++){
        csum=csum+vec[i];
        if(csum>msum){
            msum=csum;
        }
        if(csum<0){
            csum=0;
        }
    }
    cout<<msum;
}
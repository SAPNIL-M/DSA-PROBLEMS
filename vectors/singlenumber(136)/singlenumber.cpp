#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int single(vector<int>vec){
    int ans= 0;
    for(int val : vec){
        ans=ans ^ val;
    }
    return ans;
}

int main(){
    vector<int>sample={4,1,2,1,2};
    int ans=single(sample);
    cout<<ans;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,2,3,2,2,2,1,1,3,3,3,3,3,3};
    int n = vec.size();
    int freq=0,ans=0;
    for(int i =0;i<n;i++){
        
        if(freq==0){
            ans=vec[i];

        }
        if(ans==vec[i]){
            freq++;

        }
        else{
            freq--;
        }

    }
    cout<<ans;
}
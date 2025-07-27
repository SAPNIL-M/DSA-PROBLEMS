#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>prices={7,1,5,3,6,4};
    int bb=prices[0];
    int maxpro=0;
    int n = prices.size();
    for(int i=0;i<n;i++){
        if(prices[i]>bb){
            maxpro=max(maxpro,prices[i]-bb);

        }
        bb=min(bb,prices[i]);
    }
    cout<<maxpro;
    return 0;
}
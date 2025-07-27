#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>h={1,8,6,2,5,4,8,3,7};
    int left=0;
    int right = h.size()-1;
    int area =0;
    int marea=0;
    while(left<right){
        area=min(h[left],h[right])*(right-left);
        marea=max(area,marea);
        if(h[left]<h[right]){
            left++;
        }
        else{
            right--;
        }
        

    }
    cout<<marea;
}
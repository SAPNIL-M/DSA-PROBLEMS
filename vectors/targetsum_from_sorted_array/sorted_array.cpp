#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int>nums = {2,7,12,14};
    int target=26;
    int i=0;
     int j=(nums.size())-1;
     sort(nums.begin(),nums.end());
     vector<int> ans;
     while(i<=j){
        if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j); 
            cout<<"[";
            for(int val:ans){
                cout<<val<<",";
            }
            cout<<"]";
            break;       
        }
        if(nums[i]+nums[j]<target){
            i++;
        }
        if(nums[i]+nums[j]>target){
            j--;
        }
     }
}
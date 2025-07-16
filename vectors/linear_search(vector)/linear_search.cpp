#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vec = {1,2,3,4,5};
    int target = 4;
    auto it = find(vec.begin(),vec.end(),target);

    cout<< *it;
}
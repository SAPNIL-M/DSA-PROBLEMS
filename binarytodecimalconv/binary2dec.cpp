#include<iostream>
using namespace std;

int dectobin(int n){
    int rem=0;
    int pow=1;
    int ans=0;
    while(n>0){
    
    rem=n%2;
    n=n/2;
    ans=ans+(rem*pow);
    pow=pow*10;
    }
    return ans;

}

int main(){
    cout<<dectobin(50)<<endl;
}
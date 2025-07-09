#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
    int number =0;
    cout << "enter the number"<<endl;
    cin>>number;
    int ans=0;
    while(number!=0){
        int r=number%10;
        if(ans>INT_MAX/10 || (ans == INT_MAX/10 && number >INT_MAX%10)){
            return 0;
        };
        if(ans<INT_MIN/10 || (ans == INT_MIN/10 && number <INT_MIN%10)){
            return 0;
        };
        
        ans=(ans*10)+r;
        number = number/10;


    }
    cout<< ans;
}
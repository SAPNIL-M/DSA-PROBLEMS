#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
   int number=0;
   cout<<"enter thy number ";
   cin>> number;
   int sub =0 ;
   int ans = 0;
   string find_size = to_string(number);
   int size=find_size.length();
   
    while(size>0){  
        int squarer=size-1;

        sub=number%10;
        ans=ans+(sub*pow(10,squarer));
        number=number/10;
        size--;

    }
    cout<<ans;
}
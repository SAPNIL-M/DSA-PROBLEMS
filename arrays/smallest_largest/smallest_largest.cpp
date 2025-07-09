#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int marks[5]={1,2,-34,45,32};
    int smallest=INT_MAX;
    int size = sizeof(marks)/sizeof(int);

    for(int i=0;i<size;i++){
        if(marks[i]<smallest){
            smallest = marks[i];

        }
    }
    cout<< smallest;
}
#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number";
    cin>>num;

    if(num>0){
        cout<<"number is positive";
    }
    else if(num==0){
        cout<<"o";
    }
    else{
        cout<<"negative";
    }
}
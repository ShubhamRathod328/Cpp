#include<iostream>
using namespace std;


int main(){

    int n,i;
    cout<<"enter the value of n";
    cin>>n;

    if(n<2){
        cout<<"not prime number";
    }
    else{

        for( i=2;i<n;i=i+1){

            if(n%2==0)
            {
                cout<<"not a prime number";
                return 0;
            }
            else{
                cout<<"prime number";
                return 0;
            }

        }
    }
}
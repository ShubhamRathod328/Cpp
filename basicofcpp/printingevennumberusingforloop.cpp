#include<iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"Enter the the number";
    cin>>num;

    for(i=1;i<=num;i=i+1)
    {
        if(i%2==0){
            cout<<"even number"<<endl;
            cout<<i<<endl;
        }
        else{
            cout<<"number is odd"<<endl;
        }
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;

    int i=1; // initialize
    do{
        cout<<n*i<<endl;
        i++ ;//update
    }while(i<=10); //break
}
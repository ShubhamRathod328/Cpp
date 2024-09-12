#include<iostream>
using namespace std;

int main(){
     int col,row;
     int n;
     cout<<"enter the value:";
     cin>>n;
     for(row=1;row<=n;row=row+1)
     {
        for(col=1;col<=n-row;col=col+1)
        {
            cout<<" ";
        }
        
       for(col=1;col<=row;col=col+1)
       {
         char name ='A'+col-1;
        cout<<name<<" ";
       } 
       cout<<endl;
     }
}
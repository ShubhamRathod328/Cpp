#include<iostream>
using namespace std;

int main(){

    int row,col;
    for(row=6;row>=1;row=row-1)
    {
        for(col=6;col>=1;col=col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
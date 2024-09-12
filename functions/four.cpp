#include<iostream>
using namespace std;

void Swap(int &a,int &b)  // passby refernce
{
    int c;
    c=a;
    a=b;
    b=c;
}

void swap(float &c,float &d) //function overloading
{
    float r=c;
    c=d;
    d=r;

}

int main(){
     int a,b;
    cin>>a>>b;
    float f1=23,f2=20;
    swap(a,b);// inbuilt function
    Swap(a,b);
    cout<<f1<<" "<<f2;



    
}
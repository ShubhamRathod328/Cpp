#include<iostream>
using namespace std;
int fact(int n=3) // Default parameter
{    
    int ans=1;
    for(int i=1;i<=n;i++)
    ans=ans*i;
    return ans;
}
int fact(int a,int b) // function overloading
{
    int ans;
    ans=a+b;

}

int main()
{
    int a,b;
    cout<<"enter the values:";
    cin>>a>>b;
  cout<<fact();
  cout<<endl;
  cout<<fact(a,b);

}
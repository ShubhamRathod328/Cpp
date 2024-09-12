#include<iostream>
using namespace std;

bool prime(int n)
{
    if(n<2)
    return 0;

     for(int i=2;i<n;i++)
     {
        if(n%i==0)
        return 0;
     }

     return 1;
}

  int fact (int n)
  {
    int ans=1;
    for(int i=1;i<=n;i++)
    ans=ans*i;
    return ans;
  }


int main()
{

    int a,b;
    cout<<"enter the value:";
    cin>>a>>b;

    //A prime or not
    cout<<prime(a)<<endl;
    //A ka factorial
    cout<<fact(a)<<endl;
    //b prime or not 
    cout<<fact(b)<<endl;
    //b factorial
    cout<<fact(b)<<endl;
    // b-a ka factorial
    cout<<fact(b-a)<<endl;
}
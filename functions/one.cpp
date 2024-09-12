#include<iostream>
using namespace std;


int sum(int m,int n) //function declare
{
    int ans=m+n; //function define

    return ans;
}
   int mul(int m,int n)
   {

      int ans=m*n;
   }

   void subbu()
    {
       cout<<"shubham Rathod:";
    }
   
   

int main(){

    int a,b;
    cout<<"enter 2 the value:";
    cin>>a>>b;

    //function call
    cout<<sum(a,b);
    cout<<endl;
    cout<<mul(a,b);
    cout<<endl;
    subbu();

}
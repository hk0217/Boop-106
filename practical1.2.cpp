#include<iostream>
using namespace std;
int main()
{
int n,a=0,b=1,i,c;
cout<<"enter the number of n ";
cin>>n;
cout<<a<<endl;
cout<<b<<endl;
for(i=3;i<=n;i++)
{
c=a+b;
cout<<c<<endl;
a=b;
b=c;
}
}





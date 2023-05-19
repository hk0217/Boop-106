#include<iostream>
using namespace std;
int main()
{
int a,b,n,sum;
cout<<"enter the value a:";
cin>>a;
cout<<"enter the value b :";
cin>>b;
cout<<"addition"<<endl;
cout<<"subtraction"<<endl;
cout<<"multipilcation"<<endl;
cout<<"devision"<<endl;
cin>>n;
switch (n)
{
case 1:
sum=a+b;
cout<<"addition"<<sum<<endl;
break;
case 2:
sum=a-b;
cout<<"subtraction"<<sum<<endl;
break;
case 3 :
sum=a*b;
cout<<"multification is :"<<sum<<endl;
break;
case 4 :
sum=a/b;
cout<<"devision"<<sum<<endl;
break;
}
}




















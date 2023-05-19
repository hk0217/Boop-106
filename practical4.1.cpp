#include<iostream>
using namespace std;
int max(int a,int b)
{
if(a>b)
{
cout<<"maximum number is a"<<a<<endl;
}
else
{
cout<<"maximum number is b"<<b<<endl;
}         
}
int swap(int *p,int *q)
cout<<"after swaping"<<endl<<"a"<<*p<<endl<<*q<<endl;
{
int c;
c=*p;
*p=*q;
*q=c;
}
int main()
{
int a,b,*p,*q;
cout<<"enter the value of a and b : - "<<endl;
cin>>a>>b;
max(a,b);
swap(&a,&b);
return 0;
}




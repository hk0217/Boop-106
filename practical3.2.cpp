#include<iostream>
using namespace std;
int main()
{
int a[10],i,j,k=0;
cout<<"enter the 10 elements :"<<endl;
for(i=0;i<10;i++)
{
cin>>a[i];
}
for(i=0;i<10;i++)
{
if(a[i]>k)
k=a[i];
}
  cout<<"maximum number is : "<<k<<endl;
  for(i=0;i<10;i++)
{
if(a[i]<k)
k=a[i];
}
 cout<<"minimum number is : "<<k<<endl;
return 0; 
}

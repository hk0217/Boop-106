#include<iostream>
using namespace std;
int main()
{
int i,j,k,a[10];
cout<<"enter the unsolted value :"<<endl;
for(i=0;i<10;i++)
{
cin>>a[i];
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
k=a[i];
a[i]=a[j];
a[j]=k;
}
}
}
cout<<"enter solted number :";
for(i=0;i<10;i++)
{
cout<<a[i]<<endl;
}
}








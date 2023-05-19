#include<iostream>
using namespace std;
int  main()
{
int rev=0,n,c;
cout<<"enter the number";
cin>>n;
while(n!=0)
{
c=n%10;
rev=(rev*10)+c;
n=n/10;
}
cout<<"reversed number is:"<<rev<<endl;
return 0;
}


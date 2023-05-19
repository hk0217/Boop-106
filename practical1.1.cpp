#include<iostream>
using namespace std;
int main()
{
int C,F;
cout<<"enter the value of C";
cin>>C;
cout<<"enter the value of F";
cin>>F;
C=(F-32)*5/9;
cout<<"the tempracher in celcluse is"<<C<<endl;
F=(C+32)*9/5;
cout<<"the tempracher in fermik is"<<F<<endl;
return 0;
}

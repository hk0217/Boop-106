#include<iostream>
using namespace std;
class calculate
{
private:
int no1,no2;
public:
void add(int a,int b);
void sub(int c,int d);
};
void calculate::add(int a,int b )
{
no1=a;
no2=b;
cout<<"enter the value of no1 and no2 :";
cin>>a>>b;
cout<<"addition"<<a+b<<endl;
}
void calculate::sub(int c,int d)
{
no1=c;
no2=d;
cout<<"enter the no1 and no2 :";
cin>>c>>d;
cout<<"subtraction"<<c-d<<endl;
}
int main()
{
calculate cal;
cal.add(5,5);
cal.sub(10,5);
return 0 ;
}


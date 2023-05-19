#include<iostream>
const float pi=3.14;
using namespace std;
void area(int r)
{
cout<<"area of circle is"<<pi*r*r<<endl;
}
int main()
{
int r;
cout<<"enter rhe radious of circle";
cin<<r;
area(r)
return 0;
}

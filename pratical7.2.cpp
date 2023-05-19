#include<iostream.h>
class distance
{
private:
int feet;
float inch;
public:
void getdata()
{
cout<<"enter the feet="<<endl;
cin>>feet;
cout<<"enter the inch="<<endl;
cin>>inch;
}
void cal(distance d1,distance d2)
{
feet=d1.feet+d2.feet;
inch=d1.inch+d2.inch
if(inch>=12)
{
inch=inch-12;
feet++;
}
}
void showdata()
{
cout<<feet<<endl<<inch<<endl;
};
int main()
{
distance a,b,c;
a.getdata();
b.getdata();
c.getdata();
cout<<"Distance="<<endl;
c.showdata();
}

#include<iostream>
using namespace std;
class box
{
private:
float l,w,h,volume=0;
public:
void cuboid()
{
cout<<"enter the lenght = ";
cin>>l;
cout<<"enter the width =";
cin>>w;
cout<<"enter the height =";
cin>>h;
volume=l*h*w;
cout<<"volume is="<<volume<<endl;
}

void cube()
{
float volume =0;
int l;
cout<<"enter l =";
cin>>l;
volume =l*l*l;
cout<<"volume is="<<volume;
}
};
int main()
{
box obj;
obj.cuboid();
obj.cube();
}
          

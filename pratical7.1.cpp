#include<iostream>
using namespace std;
class objcount
{
int c;
static int count;
public:
void getdata(int a )
{
c=a;
count++;
}
void putdata()
{
cout<<"total number of object created for class objcount are :- "<<count<<endl;
}
};
int objcount::count;
int main()
{
objcount v1,v2;
v1.getdata(2);
v2.getdata(2);
v1.putdata();
return 0 ;
}

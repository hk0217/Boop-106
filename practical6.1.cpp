// pratical 6(A)

#include<iostream>
using namespace std;
class student
{
 private:
  int no;
  char name[10];
  float a[5];
  public:
  void getdata()
  {
    cout<<"Enter your Enrollment No:-";
    cin>>no;
    cout<<"Enter your name:-";
    cin>>name;
    cout<<"Enter your marks of engilsh,science and computers:-";
    for(int i=0;i<3;i++)
    {
      cin>>a[i];
    }  
  }  
  void putdata()
  {
    float per=0,sum=0;
    for(int i=0;i<3;i++)
    {
      sum+=a[i];
    }
    per=sum/3;  
    cout<<endl;
    cout<<"Student Details is :-"<<endl;
    cout<<endl;
    cout<<"Students Enrollemnt no is:-"<<no<<endl;
    cout<<"Students Name is:-"<<name<<endl;
    cout<<"Percentage is:-"<<per<<endl;
  }
};
int main()
{
  student obj;
  obj.getdata();
  obj.putdata();
  return 0;
}        




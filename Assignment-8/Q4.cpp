#include<iostream>
using namespace std;
class time
{
  int h,m,s;
  public:
  void read();
  void print();
  time operator+(time t2);
};
void time::read()
{
  cout<<"Enter hour,minutes and seconds";
  cin>>h>>m>>s;
}
void time::print()
{
  cout<<"Time is "<<setfill('0')<<setw(2)<<h;
  cout<<setfill('0')<<setw(2)<<m;
  cout<<setfill('0')<<setw(2)<<s<<endl;
}
time time::operator+(time t2)
{
  time t;
  t.h=h+t2.h;
  t.m=m+t2.m;
  t.s=s+t2.s;
  return t;
}
void main()
{
  time t1,t2,t3;
  t1.read(4);
  t1.print();
  t2.read(6);
  t2.print();
  t3=t1+t2;
  cout<<"Time1+Time2 ";
  t3.print();
  
}
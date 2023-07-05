#include<iostream>
using namespace std;
float area(int r)
{
    float a;float pi=3.14;
    a=pi*(r*r);
    return a;
}
float area(int l,int b)
{
    float a1;
    a1=l*b;
    return a1;
}
float area(int n,int bs,int h)
{
    float a2;
    a2=n*bs*h;
    return a2;
}
int main()
{
    int b,bs,h,r,l;
    float are;
    cout<<"\nEnter the Radius of Circle: \n";
    cin>>r;
    are=area(r);
    cout<<"\nArea of Circle: "<<are<<endl;
    cout<<"Enter the Base & Hieght of Triangle:\n";
    cin>>bs;
    cin>>h;
    are=area(0.5,b,h);
    cout<<"\nArea of Triangle: "<<are<<endl;
    cout<<"\nEnter the Length & Bredth of Rectangle: \n";
    cin>>l>>b;
    are=area(l,b);
    cout<<"\nArea of Rectangle: "<<are<<endl;
    return 0;
}
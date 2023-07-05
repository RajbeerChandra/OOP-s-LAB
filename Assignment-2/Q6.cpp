
#include<iostream>
using namespace std;
class Complex{
public:
    int real; 
    int imag; 
     
     void setvalue1()
    {
    	cout<<"enter real part of complex no."<<endl;
		cin>>real;
	}
	void setvalue2()
	{
        cout<<"enter imaginary part of complex no."<<endl;
		cin>>imag;
		
    }
    void display()
    {
    	cout<<real<<"+"<<imag<<"i"<<endl;   
    }
 
    };
int main()
    {
        Complex c[10];
        for(int i=0;i<10;i++)
		{
			c[i].setvalue1();
		}
		for(int i=0;i<10;i++)
		{
			c[i].setvalue2();
		}
        for(int i=0;i<10;i++)
		{
			c[i].display();
		}
    return 0;
    }

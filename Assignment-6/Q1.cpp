#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Complex
{
public:
    int real, img;
    Complex(int tempReal = 0, int tempImg = 0)
    {
        real = tempReal;
        img = tempImg;
    }
    Complex addComp(Complex C1, Complex C2)
    {
        Complex temp;
        temp.real = C1.real + C2.real;
        temp.img = C1.img + C2.img;
        return temp;
    }
    // ~Test()
    //     {
    //         cout<<"\n No. of Object destroyed:\t"<<count;
    //         --count;
    //     }
    ~Complex()
    {
        cout<<"Contructor invoked";
    }
};
int main()
{
    Complex C1(3, 2);
    Complex ();
    cout << "Complex number 1 : " << C1.real
    << " + i" << C1.img << endl;
    Complex C2(9, 5);
    cout << "Complex number 2 : " << C2.real
    << " + i" << C2.img << endl;
    Complex C3;
    C3 = C3.addComp(C1, C2);
    cout << "Sum of complex number : "
    << C3.real << " + i"
    << C3.img;
}

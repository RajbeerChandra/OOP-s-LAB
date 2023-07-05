#include<iostream>
using namespace std;
class A
{
public:
    int a[5];
    friend istream &operator>>(istream &din, A &ob);
    friend ostream &operator<<(ostream &dout, A &ob);
};
istream &operator>>(istream &din, A &ob)
{
    for (int i = 0; i < 5; i++)
    {
        din >> ob.a[i];
    }
    return din;
}
ostream &operator<<(ostream &dout, A &ob)
{
    for (int i = 0; i < 5; i++)
    {
        dout << ob.a[i] << " ";
    }
    return dout;
}
int main()
{
    A obj;
    cin >> obj;
    cout << obj;
    return 0;
}


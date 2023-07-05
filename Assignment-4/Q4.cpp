#include <iostream>
using namespace std;
class power
{
public:
    inline int square(int n)
    {
        return n*n;
    }
    inline int cube(int n)
    {
        return n*n*n;
    }
};
int main()
{
    int n,r;
    power a;
    cout<<"Enter the Number : \n";
    cin>>n;
    r=a.square(n);
    cout<<"Square of \n"<<n<<"="<<r<<endl;
    r=a.cube(n);
    cout<<"Cube of "<<n<<"="<<r<<endl;
    return 0;
}
#include <iostream>
using namespace std;
void swap(int *,int *);
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    cout<<"After Swapping Value of:\n\tA = "<<*a<<"B="<<*b<<endl;
}
void swap(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
int main()
{
    int e, f, temp;
    cout << "\n Enter the First Number : a =  ";
    cin >> e;
    cout << "\n Enter the Second Number : b =  ";
    cin >> f;
    temp = e;
    e = f;
    f = temp;
    cout << "\nAfter Swapping : a = " << e << " and b = " << f;
    int a = 5, b = 10;
    cout << "Before swapping"<< "\n A = " << a << "\n B = " << b << endl;
    swap(a, b);
    cout << "\n After swapping"<< "\n A = " << a << "\n B = " << b << endl;
    int x,y;
    cout<<"Enter Value Of A :: ";
    cin>>x;
    cout<<"\nEnter Value of B :: ";
    cin>>y;
    cout<<"\nBefore Swapping, Value of :: \n\tA = "<<x<<"\tB = "<<y<<"\n";
    swap(&x,&y);
    cout<<"\n Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
    return 0;
}
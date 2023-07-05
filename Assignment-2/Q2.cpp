#include<iostream>
using namespace std;
int check_prime(int);
int main()
{
    int  n1,n2,i;
    bool f;
    cout<<"Enter 2 no.";
    cin>>n1>>n2;
    cout<<"prime no.between n1 and n2\n";
    for(i=n1;i<n2;i=++i)
    {
        f=check_prime(i);
        if(f)
        cout<<i<<",";
    }
    return 0;
}
int check_prime(int n)
{
    bool is_prime =true;
    if(n==0||n==1)
    {
        is_prime=false;
    }
        for(int j = 2; j <= n/2; ++j) {
    if (n%j == 0) {
      is_prime = false;
      break;
    }
        }
    return is_prime;
}

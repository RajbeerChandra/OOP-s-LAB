#include <iostream>
using namespace std;
class dist
{
    int feet;
    int T1,T2,T3;
    int inches;

public:
    void gettme(int h, int m)
    {
        feet = h;
        inches = m;
    }
    void puttime(void)
    {
        cout << "feet  and:\n";
        cout << "inches"<< "inches:" << endl;
    }
    void sum(dist, dist);
};
void dist ::sum(dist t1, dist t2)
{
    inches = t1.inches +t2.inches;
    feet = inches / 60;
    inches = inches % 60;
    feet = feet + t1.feet + t2.feet;
}
int main()
{
    dist T1, T2, T3;
    T1.gettme(2, 45);
    T2.gettme(3, 30);
    T3.sum(T1, T2);
    cout << "T1=";
    T1.puttime();
    cout << "T2=";
    T2.puttime();
    cout << "T3=";
    T3.puttime();
    return (0);
}
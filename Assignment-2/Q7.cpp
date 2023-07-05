#include <iostream>
#include <cmath>
using namespace std;
class distanceformula
{
    public:
    int x1, y1,  x2, y2;
   float result;
    void input(){
        cout << "enter x1:  \n";
        cin >> x1;
        cout << "enter y1:  \n";
        cin >> y1;
        cout << "enter x2:  \n";
        cin >> x2;
        cout << "enter y2:  \n";
        cin >> y2;
    }
    void calculate() {
        result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
        cout << result;
    }
};
int main (){
    distanceformula d1;
    d1.input();
    d1.calculate();
}
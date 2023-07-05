#include <iostream>
using namespace std;
class Complex
{
private:
int i;
public:
Complex(): i(5)
{  }
Complex operator++ ()
{
  Complex temp;
  temp.i= ++i;
  return temp;
}
Complex operator++ (int)
{
  Complex temp;
  temp.i = i++;
  return temp;
}

void Display()
{
   cout << "i = "<< i <<endl; 
}
};

int main()
{
  Complex obj, obj1;    
  obj.Display(); 
  obj1.Display();

  obj = ++obj;
  obj.Display();
  obj1.Display();

  obj1 = obj++;
  obj.Display();
  obj1.Display();

  return 0;
}
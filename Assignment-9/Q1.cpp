#include <iostream>  
  using namespace std;
  class Shape 
  {  
  protected:  
    double x, y;  
  public:  
    void set_dim(double i, double j=0) {  
      x = i;  
      y = j;  
    }  
    virtual void show_area(void) {  
      cout << "No area computation defined ";  
      cout << "for this class.\n";  
    }  
  };  
       
     class circle : public Shape {  
    public:  
    void show_area(void) {  
    cout << " area of circle ";  
    cout << 3.14 * x * x;  
    }  
  } ; 
  class triangle : public Shape {  
    public:  
      void show_area(void) {  
        cout << " area of triangle ";  
        cout << x * 0.5 * y << ".\n";  
      }  
  };  
       
  class rectangle : public Shape {  
    public:  
      void show_area(void) {  
        cout << "  area of rectangle ";  
        cout << 2*(x+y) << ".\n";  
       }  
  };  
       
       
  main(void)  
  {  
    Shape *p;  
    triangle t; 
    rectangle s;  
    circle c;  
       
    p = &t;  
    p->set_dim(10.0, 5.0);  
    p->show_area();  
       
    p = &s;  
    p->set_dim(10.0, 5.0);  
    p->show_area();  
       
    p = &c;  
    p->set_dim(9.0);  
    p->show_area();  
       
    return 0;  
  }
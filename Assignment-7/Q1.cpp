//Multilevel Inheritence
#include <iostream>
using namespace std;

class A {
    public:
      void display() {
          cout<<"Base class content.";
      }
};

class B : public A {};

class C : public B {};

int main() {
    C obj;
    obj.display();
    return 0;
}

// Multiple Inheritence
#include <iostream>
using namespace std;

class Mammal {
  public:
    Mammal() {
      cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal {
  public:
    WingedAnimal() {
      cout << "Winged animal can flap." << endl;
    }
};

class Bat: public Mammal, public WingedAnimal {};

int main() {
    Bat b1;
    return 0;
}

//Hierarchical Inheritance

#include <iostream>
using namespace std;
class Animal {
   public:
    void info() {
        cout << "I am an animal." << endl;
    }
};
class Dog : public Animal {
   public:
    void bark() {
        cout << "I am a Dog. Woof woof." << endl;
    }
};
class Cat : public Animal {
   public:
    void meow() {
        cout << "I am a Cat. Meow." << endl;
    }
};

int main() {
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info();  
    dog1.bark();
    Cat cat1;
    cout << "\nCat Class:" << endl;
    cat1.info();  
    cat1.meow();
    return 0;
}

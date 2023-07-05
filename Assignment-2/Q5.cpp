#include <iostream>
using namespace std;
class studen
{
    string name;
    int roll;
    int marks[10];
    int tmarks = 0;
    float percentage;

public:
    void getdata()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Marks of five subjects: ";
        for (int i = 0; i < 10; i++)
        {
            cout << "Enter Marks of Subject " << i + 1 << " : ";
            cin >> marks[i];
            tmarks = (tmarks + marks[i]);
        }
    }
    void display()
    {
        cout << "Student's Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << "Marks of Subject " << i << " : ";
            cout << marks[i] << endl;
        }
        cout << "Total Marks: " << (tmarks) << endl;
        cout << "Percentage : " << (tmarks / 10) << "%" << endl;
    }
};
int main()
{
    string s;
    s.getsdata();
    s.display();
    return 0;
}
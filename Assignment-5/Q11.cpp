#include<iostream>
using namespace std;
void swap(int * num1, int * num2);
int main()
{
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
   cout<<"Before swapping numbers "<<endl;
    cout<<"Value of num1 = "<<num1<<endl;
    cout<<"Value of num2 = "<<num2<<endl<<endl;
    swap(&num1, &num2);
    return 0;
}
void swap(int * num1, int * num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2= temp;
    cout<<"After swapping numbers:"<<endl;
    cout<<"Value of num1 ="<<*num1<<endl; 
    cout<<"Value of num2 ="<<*num2<<endl; 
}
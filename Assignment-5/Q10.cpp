#include<iostream>
using namespace std;

void fact(int factorial, int n);

int main(){ 
 int factorial=1,n;    
cout<<"Enter a number: ";    
  cin>>n;    
  fact(factorial, n);  
return 0;   
}   

void fact( int factorial, int n){
	for(int i=1;i<=n;i++){    
      factorial=factorial*i;    
  }    
 cout<<"Factorial of "<<n<< " is:"<<factorial;  
}
#include<iostream>
using namespace std;

int main(){
	int m, n;
	cout<<"Enter the range smaller number to larger number: ";
	cin>>m>>n;
	
	cout<<"The numbers divisible by 7 within the range are: ";
	for(int i=m; i<=n; i++){
		if(i%7==0){
			cout<<i<<endl;;
		}
		
	}
	
	cout<<"The numbers divisible by 13 within the range are: ";
	for(int i=m; i<=n; i++){
		if(i%13==0){
		cout<<i<<endl;
		}
	}
	
	return 0;
}
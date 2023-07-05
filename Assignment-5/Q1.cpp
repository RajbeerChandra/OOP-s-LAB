#include<iostream>
#define MAX 50

using namespace std;
int main(){
	int arr[MAX];
	cout<<"Enter array elements: ";
	for(int i=0; i<5;i++){
		cin>>arr[i];
	}
	
	cout<<"DISPLAYING CONTENTS OF ARRAY: \n";
	for(int i=0; i<5; i++){
		cout<<"Element"<<i+1<<":"<<arr[i]<<endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main(){
	int n, large=0;
	cout<<"Enter number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	for(int i=0; i<n; i++){
		if(arr[i]>large){
			large=arr[i];
		}
	}
	cout<<"Largest element in array: "<< large;
	return 0;
}
#include<iostream>
using namespace std;

int main(){
	int i, j, n, temp;
	cout<<"Enter number of elements: ";
	cin>>n;
	int arr[n];
    cout<<"Enter array elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"Array in ascending order: ";
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
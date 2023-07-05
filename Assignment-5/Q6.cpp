#include<iostream>
using namespace std;

int main(){
	int r1,r2,c1,c2;
    cout<<"Enter order of first matrix: ";
	cin>>r1>>c1;
	cout<<"Enter order of second matrix: ";
	cin>>r2>>c2;
	
	int a[r1][c1], b[r2][c2], mult[10][10];
	
	cout<<"Enter elements for matrix 1:"<<endl;
	
	for(int i=0; i<r1; i++){
		for(int j=0; j<c1; j++){
			cout<<"Element["<<i+1<<"]["<<j+1<<"]";
			cin>>a[i][j];
		}
	}
	
	cout<<endl<<"Enter elements for matrix 2:"<<endl;
	
	for(int i=0; i<r2; i++){
		for(int j=0; j<c2; j++){
			cout<<"Element["<<i+1<<"]["<<j+1<<"]";
			cin>>b[i][j];
		}
	}
	cout<<endl;
	for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
            mult[i][j] = a[i][j]*b[i][j];
            
    cout<<"Product Matrix: \n";
       for (int i = 0; i < r1; ++i)
    for (int j = 0; j < c1; ++j) {
      cout<<mult[i][j]<<"   ";
      if (j == c1 - 1) {
        cout<<endl<<endl;
      }
    }
    return 0;    
}
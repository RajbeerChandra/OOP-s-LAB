#include<iostream>
using namespace std;
int main(){
	int m,n, sum=0;
	cout<<"Enter order of matrix: ";
	cin>>m>>n;
	int matrix[m][n];
	cout<<"Enter matrix elements: ";
	for(int i=0; i<m;i++){
		for(int j=0; j<n;j++){
			cin>>matrix[i][j];
		}
	}
	cout<<"The given matrix is \n";
            for (int i = 0; i < m; ++i) 
            {
                for (int j = 0; j < n; ++j)
                {
                    cout<<" "<<matrix[i][j];
                }
                cout<<endl;
            }
	for(int i=0; i<m;i++){
		for(int j=0; j<n;j++){
			sum=sum+matrix[i][j];
		}
	}   
   cout<<"Sum of all elements:"<<sum;        
}
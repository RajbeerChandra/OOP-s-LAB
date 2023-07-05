#include<iostream>
using namespace std;
int main(){
	int i,j,m,n,sum=0;
	cout<<"Enter order of matrix: ";
	cin>>m>>n;
	int matrix[m][n];
	if(m==n) {
		cout<<"Enter elements for matrix :"<<endl;
		for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"Element["<<i+1<<"]["<<j+1<<"]";
			cin>>matrix[i][j];
		}
	}
    cout<<"The given matrix is "<<endl;
            for (i = 0; i < m; ++i) 
            {
                for (j = 0; j < n; ++j)
                {
                    cout<<matrix[i][j]<<" ";
                    if(i==j){
                    sum=sum+matrix[i][j];
                }
                }
                cout<<endl;
            }
            cout<<endl<<"The sum of the main diagonal elements is:"<<sum<<endl;
        }    
         else{
            cout<<"The given order is not square matrix:"<<endl;
     }
     return 0;    
}
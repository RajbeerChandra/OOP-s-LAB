#include<iostream>
using namespace std;

int main() {
  int a[10][10], transpose[10][10], r, c;
  cout<<"Enter order of matrix: ";
  cin>>r>>c;

  cout<<endl<<"Enter matrix elements:";
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    	cout<<"Element["<<i+1<<"]["<<j+1<<"]";
    cin>>a[i][j];
  }

  cout<<endl<<"Entered matrix: "<<endl;
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
   cout<<a[i][j]<<" ";
    if (j == c - 1)
    cout<<endl;
  }

  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  cout<<endl<<"Transpose of the matrix:"<<endl;
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
   cout<<transpose[i][j]<<" ";
    if (j == r - 1)
    cout<<endl;
  }
  return 0;
}

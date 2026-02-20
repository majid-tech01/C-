#include<iostream>
using namespace std;

int main(){
  int m;
  int n;
  cin>>m;
  cin>>n;

  int arr[m][n];

  // For Input.

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }

  // For Print .

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  int MainDiagonalsum=0;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(i==j){
        MainDiagonalsum+=arr[i][j];
      }
    }
  }
  cout<<"Main Diagonal Sum is : "<<MainDiagonalsum<<endl;
}

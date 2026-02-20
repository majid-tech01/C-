#include<iostream>
using namespace std;

int main(){
  int r;
  cin>>r;
  int c;
  cin>>c;
  int arr[r][c];

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>arr[i][j];
    }
  }


for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  int MinorDiagonalSum=0;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(i+j==c-1){
        MinorDiagonalSum+=arr[i][j];
      }
    }
  }
  cout<<"Sum of Minnor Diagonal is : "<<MinorDiagonalSum<<endl;
}
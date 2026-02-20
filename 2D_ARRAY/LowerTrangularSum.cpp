#include<iostream>
using namespace std;

int main(){
  int r,c;
  cin>>r>>c;
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

  int sum=0;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(i>=j){
        sum=sum+arr[i][j];
      }
    }
  }
  cout<<"Lower Traingular Sum Is : "<<sum<<endl;
}
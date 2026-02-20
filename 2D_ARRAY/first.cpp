#include<iostream>
using namespace std;

int main(){
  int m;
  int n;
  cin>>m;
  cin>>n;
  //  int sum=0;
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
  
    int sum=0;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      sum=sum+arr[i][j];
    }
  }
  cout<<"Sum Of All Element is : "<<sum<<endl;

  // For Row wise Sum.
 
  for(int i=0;i<m;i++){
    int sum=0;
    for(int j=0;j<n;j++){
      sum=sum+arr[i][j];
    }
    cout<<i+1<<" Row Sum is: "<<sum<<endl;
  }
  


}

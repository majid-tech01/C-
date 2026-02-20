#include<iostream>
using namespace std;

int main(){
  
  int r1,r2,c1,c2;
  cin>>r1>>r2>>c1>>c2;

  int arr1[r1][c1];
  // First Arr Input .

  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cin>>arr1[i][j];
    }
  }

  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }

  int arr2[r2][c2];

  // Second  Arr Input .

  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      cin>>arr2[i][j];
    }
  }

  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
  }

  int Resultant[r1][c2];
   for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      Resultant[i][j]=0;
    }
  }

  // Multiplication Code.

 for (int i = 0; i < r1; i++) {          // row of A
        for (int j = 0; j < c2; j++) {      // column of B
            for (int k = 0; k < c1; k++) {  // common index
                Resultant[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }


cout<<"Resultant Matrix is : "<<endl;

for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      cout<<Resultant[i][j]<<" ";
    }
    cout<<endl;
  }


  
  return 0;
}
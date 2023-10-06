#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int row1,col1,row2,col2;
    
    cout<<"Enter row1 and column 1 :"<<endl;
    cin>>row1>>col1;
    cout<<"Enter row2 and column 2 :"<<endl;
    cin>>row2>>col2;

    int arr1[row1][col1];
    int arr2[row2][col2];

    cout<<"\nEnter matrix 1 : \n";
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"\nEnter matrix 2 : \n";
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }

    if(col1 == row2){
        int result[row1][col2];
        cout<<"Multiplication is : \n";

        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                int ans = 0;
                for(int k=0;k<row2;k++){
                    ans += arr1[i][k]* arr2[k][j];
                }    
                result[i][j] = ans;
            }
        }

        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Multiplication not possible !!";
    }
    
    return 0;
}
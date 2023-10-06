#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int row,col;
    cin>>row>>col;

    int arr[row][col];
    cout<<"Enter The Matrix: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int transpose[col][row];
    
     cout<<"\nTranspose is: "<<endl;
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                transpose[i][j] = arr[j][i];
            }
    }

    for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
               cout<<transpose[i][j]<<" ";
            }
        cout<<endl;
    }
    
    
    return 0;
}
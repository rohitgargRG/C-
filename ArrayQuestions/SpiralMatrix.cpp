#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Spiral(vector<vector<int>>& v){
    
}  
int main(){
    int n,m;
    cout<<"enter rows and cols:"<<endl;
    cin>>n>>m;
    vector<vector<int>> v;
    cout<<"Enter a Matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    cout<<endl;
    Spiral(v);
    cout<<"Spiral form is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
void Rotate(vector<vector<int>>& v){
    int size = v.size()-1;
    int k;
    vector<vector<int>> b = v;
    //with using extra space
    for(int i=0;i<=size;i++){
        k = size;
        for(int j=0;j<=size;j++){
                v[i][j] = b[k][i];
                k--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter Size: "<<endl;
    cin>>n;

    vector<vector<int>> v(n,vector<int>(n));
    cout<<"Enter The matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    cout<<endl;
    Rotate(v);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
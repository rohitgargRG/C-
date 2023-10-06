#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// matrix  -----> Transpose -----> Reverse Every Row
void Rotate(vector<vector<int>>& v){
    int size = v.size()-1;
    int k;

    // transpose
    for(int i=0;i<=size;i++){
        for(int j=0;j<=i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    //reverse every row
    for(int i=0;i<=size;i++){
        reverse(v[i].begin(),v[i].end());
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
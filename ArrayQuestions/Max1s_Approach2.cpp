#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maximumOnesRow(vector<vector<int>>& v){
    int leftmost = -1;
    int maxOneRow = -1;
    int j = v[0].size();
    // to find leftmost 1 at 0th index
    while(j>=0 && v[0][j]==1){
        leftmost = j;
        maxOneRow = 0;
        j--;
    }

    //  now check if in rest of rows if we can find a
    //one let to leftMost one

    for(int i=1;i<v.size();i++){
        while(j>=0 && v[i][j] == 1){
            leftmost = j;
            j--;
            maxOneRow = i;
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> V(n,vector<int> (m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>V[i][j];
        }
    }
    return 0;
}
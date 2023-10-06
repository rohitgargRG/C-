#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int maximumOnesRow(vector<vector<int> >&V){
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    int columns = V[0].size();
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){
            if(V[i][j] == 1){
                int numberOfOnes = columns - j;
                // since it is sorted,so agar ek bhi element 1
                // aagya to uske baad ke saare elements bhi 1 hi hoge
                if(numberOfOnes > maxOnes){
                    maxOnes = numberOfOnes;
                    maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
 }

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int> > vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int result = maximumOnesRow(vec);
    cout<<result<<endl;
    
    // for(int i=0;i<row;i++){
    //     int count = 0;
    //     int temp;
    //     for(int j=0;j<col;j++){
    //         if(arr[i][j] == 1){
    //             break;
    //         }
    //         else{
    //             count++;
    //             temp = col - j;
    //         }
    //     }
    // }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    vector<int> v = {1,2,3,4,5,6,7,8};
    int l,r;
    cout<<"Enter l: "<<endl;
    cin>>l;
    cout<<"Enter r: "<<endl;
    cin>>r;

    int sum = queriSum(v,l,r);
    
    return 0;
}
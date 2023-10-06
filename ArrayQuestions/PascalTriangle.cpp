#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int result = 1;
    for(int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}   
int nCr(int n,int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<"  ";
            }
            int a = 0;
            for(int k=0;k<2*n-1;k++){ 
                if(k <= i)  a = nCr(i,k);
                else continue;
                cout<<a<<"   ";         
            }
            cout<<endl;
        }
    
    
    return 0;
}
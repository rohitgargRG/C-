#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    int fibo0 = 0;
    int fibo1 = 1;
    int sum =1;
    for(int i=2;i<=n;i++){  
        sum = fibo0 + fibo1;
        fibo0 = fibo1;
        fibo1 = sum;
    }
    cout<<sum;
    return 0;
}
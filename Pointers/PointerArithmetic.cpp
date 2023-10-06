#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int x = 20;
    double dec = 9.8;
    int *ptr = &x;
    double *ptr2 = &dec;

    cout<<"size of x : "<<sizeof(x)<<endl;
    cout<<"size of dec : "<<sizeof(dec)<<endl;
    cout<<ptr<<" "<<ptr+1<<"\n";
    cout<<ptr2<<" "<<ptr2+2<<" "<<ptr2+3<<" "<<ptr2-1<<endl;;
    cout<<x;
    return 0;
}
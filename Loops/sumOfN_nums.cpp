#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int sum=0;int i= 0;
    while(i<=n){
        sum += i;
        i++;
    }
    cout<<"sum = "<<sum<<endl;

    return 0;
}
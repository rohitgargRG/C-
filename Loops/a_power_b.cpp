#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;

    cout<<"enter b: ";
    cin>>b;
    int ans =1;
    for(int i=1;i<=b;i++){
        ans *= a;
    }
    cout<<ans;


    return 0;
}
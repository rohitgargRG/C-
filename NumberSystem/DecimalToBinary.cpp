#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a decimal Number: ";
    cin>>n;
    int ans = 0;
    int pow = 1;


    while(n>0){
        int parity = n%2;
        ans += parity*pow;
        pow *= 10;
        n /= 2;
    }
    cout<<ans;

    return 0;
}
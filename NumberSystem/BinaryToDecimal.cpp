#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter a binary num: ";
    cin>>n;
    int sum=0,pow=1;

    while(n>0){
        int ld = n%10;
        sum += ld*pow;
        pow *=2;
        n /= 10;
    }
    cout<<"decimal form = "<<sum;
    return 0;
}
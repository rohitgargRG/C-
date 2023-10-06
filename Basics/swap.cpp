#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;

    cout<<"Value of num1: "<<num1<<endl;
    cout<<"Value of num2: "<<num2<<endl;

    // int temp;
    // temp =num1;
    // num1 = num2;
    // num2 = temp;

    // without using 3rd variable:
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout<<"values after swapping are:\n";
    cout<<"Value of num1: "<<num1<<endl;
    cout<<"Value of num2: "<<num2<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int num1 = 10;
    int num2 =5;

    cout<<num1++<<endl; //10     --num1 = 11
    cout<<++num2<<endl; //6      --num2 = 6

    cout<<--num1<<endl; //10     --num1 = 10
    cout<<num1--<<endl; //10     --num1 = 9

    cout<<num1++<<endl; //9       --num1 = 10
    cout<<++num1<<endl; //11      --num1 = 11

    cout<<num1++ + ++num2<<endl;//18   --num1 = 12,num2=7
    cout<<--num2 + num1--<<endl;//18   --num1 = 11 , num2=6


    return 0;
}
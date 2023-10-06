#include<iostream>
using namespace std;

int add(int num1,int num2){
    return (num1+num2);
}
int add(int num1,int num2,int num3){
    return (num1+num2+num3);
}
float add(float num1,float num2){
    return float(num1+num2);
}
int main(){
    float a,b;
    cin>>a>>b;
    cout<<"sum = "<<add(a,b)<<endl;
    return 0;
}
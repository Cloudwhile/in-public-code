
#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;
void ain(float a, b){
float c;
char nu;
cout<<"Calculate(a?b[1+1]):";
cin>>a>>nu>>b;
while(1){
switch (nu){
case '+':
    c = a + b;
    cout<<a<<nu<<b<<"="<<c<<endl;
    break;
case '-':
    c = a - b;
    cout<<a<<nu<<b<<"="<<c<<endl;
    break;
case '*':
    c = a * b;
    cout<<a<<nu<<b<<"="<<c<<endl;
    break;
case '/':
    if b == 0{
    cout<<"the second number must not be zero!"<<endl;
}
else {
    c = a / b
    cout<<a<<nu<<b<<"="<<c<<endl;
}
    break;
}
default:
    cout<<"Please enter '+','-','*','//'."<<endl;
    break;
}
}
int main (){
cout<<"Which function do you want to run:";

return 0;
}


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
int d = MessageBox(NULL,TEXT("functions are prepared"),TEXT("Come from process"),MB_YESNO);
if(d == IDYES){
    
}
return 0;
}

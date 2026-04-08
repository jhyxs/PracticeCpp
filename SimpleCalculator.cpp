#include <iostream>
using namespace std;

int main(){ 
 double num1, num2;
 char op;
 
 cout<<"This is a simple calculator\n";
 cout<<"Enter the First Number: ";
 cin>>num1;
 cout<<"Enter the operator: ";
 cin>>op;
 cout<<"Enter the Second Number: ";
 cin>>num2;
  
 double result;
 if (op == '+'){ 
result = num1 + num2;
 }else if (op == '-'){
result = num1 - num2;
 }else if (op == '*'){
result = num1 * num2;
 }else if (op == '/'){
result = num1 / num2;
 }else{
 cout<<"Invalid operator!!!\n";
 return 1;
}
cout<<"Result: " << result << endl;
return 0;
}


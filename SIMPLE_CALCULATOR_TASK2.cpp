/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    char operation;
    cout<<"Enter operation (+,-,*,/) to perform: ";
    cin>>operation;
    if(operation=='+'){
        cout<<"Addition of a and b is: "<<a+b<<endl;
    }
   else if(operation=='-'){
        cout<<"Substraction of a and b is: "<<a-b<<endl;

    }
    else if(operation=='*'){
        cout<<"Multiplication of a and b is: "<<a*b<<endl;
    }
    else if(operation=='/'){
         if(b!=0){
            cout<<"Division of a and b is: "<<a/b<<endl;
         }
         else{
            cout<<"Error! Division by Zero"<<endl;
         }
    }
    else{
        cout<<"Invalid Operator!"<<endl;
    }
    return 0;

}
#include<iostream>
#include <cmath>

using namespace std;

int main (){
    double num1, num2;
    string operation;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+ , - , * , / ,): " ;
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;
    if (operation == "+"){
        cout <<   num1 + num2 << endl;
    } else if (operation == "-"){
        cout <<  num1 - num2 << endl;
    } else if (operation == "*"){
        cout  <<num1 * num2 << endl;
    } else if (operation == "/"){
        cout << num1 / num2 << endl;
    } else {
        cout << "Invalid operation" << endl;
    } 
	return 0;
   
}
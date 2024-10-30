#include<iostream>
using namespace std;

int main() {
	float num1;
	float num2;
	char operation;
	
	cout<<"Choose the operation you want to be performed (+, -, *, /): "<<endl;
	cin>>operation;
	cout<<"Enter a number: "<<endl;
	cin>>num1;
	cout<<"Enter another number: "<<endl;
	cin>>num2;
	
	switch(operation){
	
	case '+':
		cout<<"The result is: "<<num1 + num2<<endl; 
		break; 

	case '-':
		cout<<"The result is: "<<num1 - num2<<endl; 
		break; 	
		
	case '*':
		cout<<"The result is: "<<num1 * num2<<endl; 
		break; 
		
	case '/':
		if(num2 != 0)
			cout<<"The result is: "<<num1 / num2<<endl; 
		else
			cout<<"Division by zero is not allowed"<<endl;
		break; 
		
	default:
		cout<<"Error: Invalid operation."<<endl;
		break;
	}

	return 0;
}

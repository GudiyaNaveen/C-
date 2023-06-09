#include <iostream>

using namespace std;

int multiplication(int , int );

int main(){
	
	int num1 = 0, num2 = 0;
	
	cout << "Enter two numbers: \n";
	cin >> num1 >> num2;
	
	int mul = num1 * num2;
	
	cout << mul;
	
	return 0;
}

int multiplication(int num1, int num2)
{
	int mul = num1 * num2;
	return mul;
}
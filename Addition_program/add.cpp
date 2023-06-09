#include <iostream>

using namespace std;

int Addtion(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main(){
	int num1 = 0, num2 = 0;
	int add = 0;
	cout << "Enter two numbers";
	 
	cin >> num1 >> num2;
	
	add = Addtion(num1, num2);
	
	cout << add;
	 
	 
	
	return 0;
}
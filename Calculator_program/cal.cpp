#include <iostream>

using namespace std;

int add( );
int sub( );
int mul( );
int div( );

int main()
{
	char ch = '\0';
	int result = 0;
	
	cout << "\n\n/.........................Welcome to Calculator World......................../\n";
	cout << "                             Addition:        [ + ]\n";
	cout << "                             Substraction:    [ - ]\n";
	cout << "                             Multiplication   [ * ]\n";
	cout << "                             Division:        [ / ]\n";
	cout << "                             Exit:            [ ! ]";
	cout << "\n\n\n";
	cout << "Select the above options: ";
	cin >> ch;
	
	while(1)
	{
		switch(ch)
		{
			case '+':
					result = add();
					cout << result;
					break;
			case '-':
					result = sub();
					cout << result;
					break;
			case '*':
					result = mul();
					cout << result;
					break;
			case '/':
					result = div();
					cout << result;
					break;
			default: goto EXIT;
		}
	}
	EXIT: cout << "Thank you for visiting\n";
	
	return 0;
}

int add( )
{
	int num1 = 0;
	int num2 = 0;
	
	cout << "\n\n";
	cout << "Enter two numbers: \n";
	cin >> num1 >> num2;
	
	int result = 0;
	result = num1 + num2;
	return result;
}

int sub( )
{
	int num1 = 0;
	int num2 = 0;
	
	cout << "\n\n";
	cout << "Enter two numbers: \n";
	cin >> num1 >> num2;
	
	int result = 0;
	result = num1 - num2;
	return result;
}

int mul( )
{
	int num1 = 0;
	int num2 = 0;
	
	cout << "\n\n";
	cout << "Enter two numbers: \n";
	cin >> num1 >> num2;
	
	int result = 0;
	result = num1 * num2;
	return result;
}

int div( )
{
	int num1 = 0;
	int num2 = 0;
	
	cout << "\n\n";
	cout << "Enter two numbers: \n";
	cin >> num1 >> num2;
	
	int result = 0;
	result = num1 / num2;
	return result;
}
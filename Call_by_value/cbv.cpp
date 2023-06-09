#include <iostream>
#include <memory>

using namespace std;

void cbv(int , int );

int main()
{
	int num1 = 0, num2 = 0;
	
	num1 = 451;
	num2 = 439;
	
	cbv(num1, num2);
	
	cout << "Address of this num1 in main: " << addressof(num1) << endl;
	cout << "Address of this num2 in main: " << addressof(num2) << endl;
	cout << "Values in main: " << num1 << " " << num2 << endl;
	return 0;
}

void cbv(int num1, int num2)
{
	num1 = 449;
	num2 = 452;
	
	cout << "Address of this num1 in cbv: " << addressof(num1) << endl;
	cout << "Address of this num2 in cbv: " << addressof(num2) << endl;
	cout << "Values in cbv: " << num1 << " " << num2 << endl;
}
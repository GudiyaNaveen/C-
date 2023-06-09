#include <iostream>
#include <memory>

using namespace std;

void cbv(int *, int *);

int main()
{
	int num1 = 0, num2 = 0;
	
	num1 = 451;
	num2 = 439;
	
	//cout << "Address of this num1 in main: " << addressof(num1) << endl;
	//cout << "Address of this num2 in main: " << addressof(num2) << endl;
	
	cbv(&num1, &num2);
	
	cout << "Address of this num1 in main: " << addressof(num1) << endl;
	cout << "Address of this num2 in main: " << addressof(num2) << endl;
	cout << "Values in main: " << num1 << " " << num2 << endl;
	return 0;
}

void cbv(int *ptr1, int *ptr2)
{
	*ptr1 = 449;
	*ptr2 = 452;
	
	cout << "Address of this num1 in cbr: " << addressof(*ptr1) << endl;
	cout << "Address of this num2 in cbr: " << addressof(*ptr2) << endl;
	cout << "Values in cbr: " << *ptr1 << " " << *ptr2 << endl;
}
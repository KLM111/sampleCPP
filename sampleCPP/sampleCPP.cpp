
#include <iostream>
using namespace std;

int main()
{
	int hours;
	double payrate;
	double payment;
	cout << "Payroll App ver 2.0" << endl;
	cout << "====================" << endl << endl;
	cout << "Enter the hours worked as an Integer ==> ";
	cin >> hours;
	cout << "Enter the payrate as a decimal ==>";
	cin >> payrate;
	payment = hours * payrate;
	cout << "\nYour Payment is = " << payment << endl;
}


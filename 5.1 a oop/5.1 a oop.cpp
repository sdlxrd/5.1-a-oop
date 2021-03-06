#include <iostream>
#include "Pay.h"
#define debug
using namespace std;

Pay makePay(int x, int y)
{
	Pay pay;
	if (!pay.Init(x, y))
		cout << "wrong argument init" << endl;
	
	return pay;
}
int main()
{
	bool res;
	Pay a;
	int n;
	do
	{
		try
		{
			res = true;
			cout << "Enter arguments:" << endl;
			cin >> a;
		}
		catch (invalid_argument ex)
		{
			res = false;
			cerr << ex.what() << endl;
		}
		catch (NewException& ex)
		{
			res = false;
			cerr << ex.getMessage() << endl;
		}
		catch (Exception* ex)
		{
			res = false;
			cerr << ex->What() << endl;
		}

	} while (!res);
	
	cout << "Count of days = "; cin >> n;
	cout << endl;
	cout << "first / second * count = " << a.Sum(n) << endl;
	cout << endl;
	cout << "a++ " << endl << a++ << endl;
	cout << "result = " << endl << a << endl;
	cout << "a-- " << endl << a-- << endl;
	cout << "result = " << endl << a << endl;
	cout << "++a " << endl << ++a << endl;
	cout << "--a " << endl << --a << endl;

	system ("pause");
}
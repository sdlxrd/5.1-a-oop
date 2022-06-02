#include <iostream>
#include "Pay.h"
//#define debug
using namespace std;

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
	cout << "Sum = " << a.Sum(n) << endl;
	
 }
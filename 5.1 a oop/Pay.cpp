#include "Pay.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Pay::setFirst(double x)
{
	if (x < 0)
	{
		throw Exception("Numbers be > 0");
	}
	else
	{
		first = x;
	}
}
void Pay::setSecond(int x)
{
	if (x < 0)
	{
		throw Exception("Numbers be > 0");
	}
	else
	{
		second = x;
	}
}
Pay::Pay()
{
	first = 0;
	second = 0;
}
Pay::Pay(double f = 0, int s = 0)
{
	if (f < 0 || s < 0)
	{
		throw invalid_argument("Numbers must be > 0");
	}
	else
	{
		setFirst(f);
		setSecond(s);
	}
}
Pay::Pay(const  Pay& x)
{
	first = x.first;
	second = x.second;
}
Pay::~Pay()
{}

Pay& Pay::operator =(const Pay& x)
{
	first = x.first;
	second = x.second;
	return *this;
}
Pay ::operator string() const
{
	stringstream  ss;
	ss << "First = " << first << endl;
	ss << "Second = " << second << endl;
	return ss.str();
}
Pay operator +(const Pay& x, const Pay& y)
{
	return Pay(x.first + y.first, x.second + y.second);
}
Pay operator -(const Pay& x, const Pay& y)
{
	return Pay(x.first - y.first, x.second - y.second);
}
Pay operator *(const Pay& x, const Pay& y)
{
	return Pay(x.first * y.first, x.second * y.second);
}
Pay operator /(const Pay& x, const Pay& y)
{
	return Pay(x.first / y.first, x.second / y.second);
}
Pay operator ^(const Pay& x, const Pay& y)
{
	return Pay(pow(x.first, y.first), pow(x.second, y.second));
}
ostream& operator << (ostream& out, const Pay& x)
{
	out << string(x);
	return out;
}
istream& operator >>(istream& in, Pay& x)
{
	int f;
	double s;

	cout << "First = "; in >> f;
	cout << "Second = "; in >> s;

	if (f< 0 or s < 0)
	{
		throw NewException("Number must be > 0");
	}
	else 
	{
		x.setFirst(f);
		x.setSecond(s);
	}
	return in;
}
Pay& Pay::operator ++()
{
	first++;
	second++;
	return *this;
}
Pay& Pay::operator --()
{
	first--;
	second--;
	return *this;
}
Pay Pay::operator ++(int)
{
	Pay t(*this);
	first++;
	second++;
	return t;
}
Pay Pay::operator --(int)
{
	Pay t(*this);
	first--;
	second--;
	return t;
}
double Pay::Sum(int s)
{
	return getFirst() / getSecond()  * s;
}
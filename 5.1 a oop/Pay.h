#pragma once
#include <iostream>
#include <string>
#include "NewException.h"
#include "Exception.h"

using namespace std;

class Pay
{
	double first;
	int second;
public:
	Pay();
	Pay(double, int);
	Pay(const Pay&);
	~Pay();
	
	double getFirst() const {return first;}
	int getSecond() const {return second;}
	void setFirst(double);
	void setSecond(int);
	
	Pay& operator=(const Pay&);
	operator string() const;
	
	friend Pay operator +(const Pay&, const Pay&);
	friend Pay operator -(const Pay&, const Pay&);
	friend Pay operator *(const Pay&, const Pay&);
	friend Pay operator /(const Pay&, const Pay&);
	friend Pay operator ^(const Pay&, const Pay&);
	
	friend ostream& operator <<(ostream&, const Pay&);
	friend istream& operator >>(istream&, Pay&);
	
	Pay& operator ++();
	Pay operator ++(int);
	Pay& operator --();
	Pay operator --(int);
	
	double Sum(int n);
};
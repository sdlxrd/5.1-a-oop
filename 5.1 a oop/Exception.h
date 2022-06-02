#pragma once
#include <iostream>
#include <string>
using namespace std;
class Exception : exception
{
	string message;
public:
	Exception(string) : message(message) {}
	string What() { return message; }
};
#pragma once
#include <iostream>
#include <string>
#include "Electronics.h"
using namespace std;

class Smartphone : virtual public Electronics
{
public:
	Smartphone(string names, int cash, double display);
	virtual void Show() override;

protected:
	double _display;

private:

};
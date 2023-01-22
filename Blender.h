#pragma once
#include <iostream>
#include <string>
#include "Electronics.h"

using namespace std;

class Blender : virtual public Electronics
{
public:
	Blender(string names, int cash, int power, string color);
	virtual void Show() override;

protected:
	int _power;
	string _color;

private:

};

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Electronics
{
public:
	Electronics(string names, int cash);
	virtual void Show();

protected:
	string _names;
	int _cash;

private:

};

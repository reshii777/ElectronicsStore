#pragma once
#include <iostream>
#include <string>
#include "Smartphone.h"
#include "Blender.h"
using namespace std;

class RobotCleaner final : public Smartphone, Blender
{
public:
	RobotCleaner(string names, int cash, int power, string color, double display);
	virtual void Show() override;
	
protected:

private:

};
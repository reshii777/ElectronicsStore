#pragma once
#include<iostream>
#include<string>
#include "Electronics.h"
#include"Blender.h"
using namespace std;

class VacuumCleaner : public Blender
{
public:
	VacuumCleaner(string names, int cash, int power, string color);
	virtual void Show() override;

protected:

private:

};
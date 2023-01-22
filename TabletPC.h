#pragma once
#include <iostream>
#include <string>
#include "Electronics.h"
#include "Smartphone.h"
using namespace std;

class TabletPC final : public Smartphone
{
public:
	TabletPC(string names, int cash, double display);
	void Show() override;

protected:

private:

};
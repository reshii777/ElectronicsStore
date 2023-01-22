#include "Smartphone.h"

Smartphone :: Smartphone(string names, int cash, double display) : Electronics(names, cash), _display(display)
{

}

void Smartphone :: Show()
{
	cout << "Название товара: "s << _names << endl;
	cout << "Диагональ экрана: "s << _display << " дюймов "s << endl;
	cout << "Цена: "s << _cash << " руб. "s << endl;
}

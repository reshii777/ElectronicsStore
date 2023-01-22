#include "RobotCleaner.h"

RobotCleaner :: RobotCleaner(string names, int cash, int power, string color, double display) : Electronics(names, cash), Blender(names, cash, power, color), Smartphone(names, cash, display)
{

}

void RobotCleaner :: Show()
{
	cout << "Название товара: "s << _names << endl;
	cout << "Мощность: "s << _power << " Ватт "s << endl;
	cout << "Цвет: "s << _color << endl;
	cout << "Диагональ экрана: "s << _display << " дюймов "s << endl;
	cout << "Цена: "s << _cash << " руб. "s << endl;
}
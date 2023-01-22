#include "Blender.h"

Blender :: Blender(string names, int cash, int power, string color) : Electronics(names, cash), _power(power), _color(color)
{
}

void Blender :: Show()
{
	cout << "Название товара: "s << _names << endl;
	cout << "Мощность: "s << _power << " Ватт "s << endl;
	cout << "Цвет: "s << _color << endl;
	cout << "Цена: "s << _cash << " руб. "s << endl;
}

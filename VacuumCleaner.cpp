#include "VacuumCleaner.h"

VacuumCleaner :: VacuumCleaner(string names, int cash, int power, string color) : Electronics(names, cash), Blender(names, cash, power, color)//, _material(material)
{

}

void VacuumCleaner :: Show()
{
	cout << "Название товара: "s << _names << endl;
	cout << "Мощность: "s << _power << " Ватт "s << endl;
	cout << "Цвет "s << _color << endl;
	cout << "Цена: "s << _cash << " руб. "s << endl;
}

#include "Blender.h"

Blender :: Blender(string names, int cash, int power, string color) : Electronics(names, cash), _power(power), _color(color)
{
}

void Blender :: Show()
{
	cout << "�������� ������: "s << _names << endl;
	cout << "��������: "s << _power << " ���� "s << endl;
	cout << "����: "s << _color << endl;
	cout << "����: "s << _cash << " ���. "s << endl;
}
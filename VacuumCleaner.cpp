#include "VacuumCleaner.h"

VacuumCleaner :: VacuumCleaner(string names, int cash, int power, string color) : Electronics(names, cash), Blender(names, cash, power, color)//, _material(material)
{

}

void VacuumCleaner :: Show()
{
	cout << "�������� ������: "s << _names << endl;
	cout << "��������: "s << _power << " ���� "s << endl;
	cout << "���� "s << _color << endl;
	cout << "����: "s << _cash << " ���. "s << endl;
}
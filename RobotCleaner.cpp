#include "RobotCleaner.h"

RobotCleaner :: RobotCleaner(string names, int cash, int power, string color, double display) : Electronics(names, cash), Blender(names, cash, power, color), Smartphone(names, cash, display)
{

}

void RobotCleaner :: Show()
{
	cout << "�������� ������: "s << _names << endl;
	cout << "��������: "s << _power << " ���� "s << endl;
	cout << "����: "s << _color << endl;
	cout << "��������� ������: "s << _display << " ������ "s << endl;
	cout << "����: "s << _cash << " ���. "s << endl;
}
#include "Smartphone.h"

Smartphone :: Smartphone(string names, int cash, double display) : Electronics(names, cash), _display(display)
{

}

void Smartphone :: Show()
{
	cout << "�������� ������: "s << _names << endl;
	cout << "��������� ������: "s << _display << " ������ "s << endl;
	cout << "����: "s << _cash << " ���. "s << endl;
}
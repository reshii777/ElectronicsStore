#include "TabletPC.h"

TabletPC :: TabletPC(string names, int cash, double display) : Electronics(names, cash), Smartphone(names, cash, display)
{

}

void TabletPC :: Show()
{
	cout << "�������� ������: "s << _names << endl;
	cout << "��������� ������: "s << _display << " ������ "s << endl;
	cout << "����: "s << _cash << " ���. "s << endl;
}
#include "Electronics.h"

Electronics :: Electronics(string names, int cash) : _names(names), _cash(cash)
{

}

void Electronics :: Show()
{
	cout << "�������� ������: "s << _names << endl;
	cout << "����: "s << _cash << " ���. " << endl;
}
#include "TabletPC.h"

TabletPC :: TabletPC(string names, int cash, double display) : Electronics(names, cash), Smartphone(names, cash, display)
{

}

void TabletPC :: Show()
{
	cout << "Название товара: "s << _names << endl;
	cout << "Диагональ экрана: "s << _display << " дюймов "s << endl;
	cout << "Цена: "s << _cash << " руб. "s << endl;
}
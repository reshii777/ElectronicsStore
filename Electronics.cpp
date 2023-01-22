#include "Electronics.h"

Electronics :: Electronics(string names, int cash) : _names(names), _cash(cash)
{

}

void Electronics :: Show()
{
	cout << "Название товара: "s << _names << endl;
	cout << "Цена: "s << _cash << " руб. " << endl;
}

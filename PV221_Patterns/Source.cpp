#include <iostream>
#include "Windows.h"
#include "Singleton.h"
#include "Prototype.h"
#include "Factory Method.h"
#include "Builder.h"
#include "Abstract Factory.h"
#include "Adapter.h"
#include "Decorator.h"


using namespace std;




int main()
{
	SetConsoleOutputCP(1251);

	Pizza* pizza = new UkranianPizza();
	pizza = new Tomato(pizza);
	pizza = new Cheese(pizza);
	/*pizza = new Cheese(pizza);
	pizza = new Mushrooms(pizza);
	pizza = new Tomato(pizza);*/

	cout << "Назва : " << pizza->getName() << endl;
	cout << "Ціна  : " << pizza->getPrice() << endl;
}
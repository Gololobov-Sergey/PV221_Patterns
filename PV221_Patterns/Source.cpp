#include <iostream>
#include "Windows.h"
#include "Singleton.h"
#include "Prototype.h"
#include "Factory Method.h"
#include "Builder.h"
#include "Abstract Factory.h"
#include "Adapter.h"
#include "Decorator.h"
#include "Bridge.h"
#include "Composite.h"
#include "Facade.h"
#include "Proxy.h"


using namespace std;




int main()
{
	SetConsoleOutputCP(1251);

	DataBaseProxy* proxy = new DataBaseProxy();

	while (true)
	{
		string key;
		cin >> key;
		cout << proxy->getPage(key) << endl;
	}
}
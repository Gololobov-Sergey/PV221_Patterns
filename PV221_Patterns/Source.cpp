#include <iostream>
#include "Singleton.h"
#include "Prototype.h"


using namespace std;




int main()
{
	Animal* cat = new Cat("Vas`ka");
	//cat->print();
	Animal* dog = new Dog("Sharik");
	Animal* dog1 = new Dog("Bobik");
	//dog1->print();

	//foo(dog1);


	PrototypeRegistry pr;
	pr.add(cat);
	pr.add(dog);
	pr.add(dog1);


	Animal* an = pr.getByName("Vas`ka");
	if (an)
		an->print();
}
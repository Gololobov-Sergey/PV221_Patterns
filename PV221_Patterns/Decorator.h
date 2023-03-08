#pragma once
#include <iostream>
#include <string>


using namespace std;



class Pizza
{
	string name;

public:

	Pizza(string name) :name(name) {}

	string getName() { return name; }

	virtual int getPrice() = 0;
};


class ItalianPizza : public Pizza
{
public:

	ItalianPizza() :Pizza("Італійська піцца") {}

	virtual int getPrice() override { return 150; }
};


class UkranianPizza : public Pizza
{
public:

	UkranianPizza() : Pizza("Українська піцца") {}

	virtual int getPrice() override { return 180; }
};



class PizzaDecorator : public Pizza
{
protected:
	Pizza* pizza;

public:
	PizzaDecorator(string wrapper, Pizza* p) : Pizza(wrapper), pizza(p) {}


};



class Tomato : public PizzaDecorator
{
public:
	Tomato(Pizza* p) : PizzaDecorator(p->getName() + ", з помідорами", p) {}
	virtual int getPrice() override { return pizza->getPrice() + 20; }
};

class Cheese : public PizzaDecorator
{
public:
	Cheese(Pizza* p) : PizzaDecorator(p->getName() + ", з сиром", p) {}
	virtual int getPrice() override { return pizza->getPrice() + 30; }
};


class Mushrooms : public PizzaDecorator
{
public:
	Mushrooms(Pizza* p) : PizzaDecorator(p->getName() + ", з грибочками", p) {}
	virtual int getPrice() override { return pizza->getPrice() + 35; }
};



//int main()
//{
//	SetConsoleOutputCP(1251);
//
//	Pizza* pizza = new UkranianPizza();
//	pizza = new Tomato(pizza);
//	pizza = new Cheese(pizza);
//	/*pizza = new Cheese(pizza);
//	pizza = new Mushrooms(pizza);
//	pizza = new Tomato(pizza);*/
//
//	cout << "Назва : " << pizza->getName() << endl;
//	cout << "Ціна  : " << pizza->getPrice() << endl;
//}
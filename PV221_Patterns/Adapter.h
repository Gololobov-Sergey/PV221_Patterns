#pragma once
#include <iostream>
#include <string>


using namespace std;



class ITransport
{
public:
	virtual void drive() = 0;
};



class Auto : public ITransport
{
public:
	void drive()
	{
		cout << "Авто їде по дорозі" << endl;
	}
};



class Traveler
{
public:
	void travel(ITransport* transport)
	{
		transport->drive();
	}
};



class Camel
{
public:
	void move()
	{
		cout << "Верблюд іде по пустелі" << endl;
	}
};


class CamelAdapter : public ITransport
{

	Camel* camel;

public:

	CamelAdapter(Camel* camel) : camel(camel) {}

	void drive()
	{
		camel->move();
	}
};


class Horse
{
public:
	void jamping()
	{
		cout << "Конячка скачить по степу" << endl;
	}
};

class HorseAdapter : public ITransport
{

	Horse* horse;

public:

	HorseAdapter(Horse* horse) : horse(horse) {}

	void drive()
	{
		horse->jamping();
	}
};


//int main()
//{
//	SetConsoleOutputCP(1251);
//
//	Traveler* traveler = new Traveler;
//	traveler->travel(new Auto);
//
//	Camel* camel = new Camel;
//	CamelAdapter* ca = new CamelAdapter(camel);
//	traveler->travel(ca);
//
//	Horse* horse = new Horse();
//	HorseAdapter* ha = new HorseAdapter(horse);
//	traveler->travel(ha);
//
//
//}
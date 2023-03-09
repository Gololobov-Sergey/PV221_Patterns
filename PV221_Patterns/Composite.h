#pragma once
#include <iostream>
#include <string>
#include <list>


using namespace std;



class Component
{
protected:
	string name;
	static int n;

public:
	Component(string name) : name(name) {}

	virtual void print() = 0;
};


int Component::n = 0;

class Directory : public Component
{
	list<Component*> components;

public:

	Directory(string name) : Component(name) {}

	void add(Component* comp) { components.push_back(comp); }

	virtual void print() override
	{
		n++;
		for (size_t i = 0; i < n; i++)
		{
			cout << "  ";
		}
		cout << "[" << name << "]" << endl;
		for (auto c : components)
		{
			c->print();
		}
		n--;
	}
};

class File : public Component
{
public:

	File(string name) : Component(name) {}

	virtual void print() override
	{
		n++;
		for (size_t i = 0; i < n; i++)
		{
			cout << "  ";
		}
		cout << "-";
		cout << name << endl;
		n--;
	}
};



//int main()
//{
//	SetConsoleOutputCP(1251);
//
//	Directory* discC = new Directory("C:\\");
//	Directory* dir1 = new Directory("Dir 1");
//	Directory* dir2 = new Directory("Dir 2");
//	Directory* dir3 = new Directory("Dir 3");
//	File* file1 = new File("File 1");
//	File* file2 = new File("File 2");
//	File* file3 = new File("File 3");
//	File* file4 = new File("File 4");
//	File* file5 = new File("File 5");
//	File* file6 = new File("File 6");
//	File* file7 = new File("File 7");
//
//	discC->add(dir1);
//	discC->add(dir2);
//	discC->add(file1);
//
//	dir1->add(dir3);
//	dir1->add(file2);
//	dir1->add(file3);
//
//	dir2->add(file4);
//	dir2->add(file5);
//
//	dir3->add(file6);
//	dir3->add(file7);
//
//
//	discC->print();
//
//}
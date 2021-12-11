#include "c_smartphone.h"
c_smartphone::c_smartphone()
{
	this->name = (char*)"";
	this->memory = 0;
	this->RAM = 0;
	this->diagonal = 0;
	this->OS = 0;
}
c_smartphone::c_smartphone(char* name, int memory, int RAM, float diagonal, bool OS)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->memory = memory;
	this->RAM = RAM;
	this->diagonal = diagonal;
	this->OS = OS;
}

c_smartphone::c_smartphone(c_smartphone& sm)
{
	this->name = new char[strlen(sm.name) + 1];
	strcpy_s(this->name, strlen(sm.name) + 1, sm.name);
	this->memory = sm.memory;
	this->RAM = sm.RAM;
	this->diagonal = sm.diagonal;
	this->OS = sm.OS;
}

void c_smartphone::print()
{
	std::cout << "name: " << name << "\n"
		<< "Memory: " << memory << " GB" << "\n"
		<< "RAM: " << RAM << " GB" << "\n"
		<< "diagonal: " << diagonal << " inches" << "\n"
		<< "OS: " << ((OS) ? "Android" : "IOS") << "\n";
}


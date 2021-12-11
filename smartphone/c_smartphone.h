#pragma once
#include<iostream>
class c_smartphone
{
private:
	char* name;
	int memory;
	int RAM;
	float diagonal;
	bool OS; // 0 - IOS, 1 - Android
public:
	c_smartphone();
	c_smartphone(char* name, int memory, int RAM, float diagonal, bool OS);
	c_smartphone(c_smartphone& sm);
	void print();
	inline char* getname()
	{
		return name;
	}
	inline int getmemory()
	{
		return memory;	
	}
	inline int getRAM()
	{
		return RAM;
	}
	inline float getdiagonal()
	{
		return diagonal;
	}
	inline bool getOS()
	{
		return OS;
	}
	inline void setname(char* name)
	{
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}
	inline void setmemory(int memory)
	{
		this->memory = memory;
	}
	inline void setRAM(int RAM)
	{
		this->RAM = RAM;
	}
	inline void setdiagonal(float diagonal)
	{
		this->diagonal = diagonal;
	}
	inline void setOS(bool OS)
	{
		this->OS = OS;
	}
	~c_smartphone()
	{
		delete[] name;
	}
};


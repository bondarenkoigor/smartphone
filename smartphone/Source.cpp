#include<iostream>
#include"c_smartphone.h"

using namespace std;

int main()
{
	c_smartphone* smartphone = new c_smartphone((char*)"Samsung Galaxy S21", 128, 8, 6.2, 1);
	smartphone->print();
	delete smartphone;
}
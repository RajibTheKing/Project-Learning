
#ifndef MyInterface_h
#define MyInterface_h

#include <iostream>
using namespace std;

class Controller;

class MyInterface
{
public:
	MyInterface();
	~MyInterface();


	int AddSum(int a, int b);
	int Iterate(int num);
private:
	Controller *m_pController;
};

#endif

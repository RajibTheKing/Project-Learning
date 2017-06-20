#include "MyInterface.h"
#include "Controller.h"


MyInterface::MyInterface()
{
	m_pController = new Controller();
}

MyInterface::~MyInterface()
{



}

int MyInterface::AddSum(int a, int b)
{
	return a+b;
}

int MyInterface::Iterate(int num)
{
	return m_pController->Iterate(num);

}


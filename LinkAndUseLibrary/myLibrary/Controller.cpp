#include "Controller.h"
#include <iostream>
Controller::Controller()
{

}

Controller::~Controller()
{

}

int Controller::Iterate(int num)
{
	for(int i=0;i<num;i++)
	{
		std::cout<<"Here: "<<i<<std::endl;
	}

	return 0;
}
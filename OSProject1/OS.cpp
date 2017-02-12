#include "OS.h"
#include <iostream>
#include <fstream>


OS::~OS()
{
}

OS::OS()
{
	std::ifstream OSInfo("C:\\Users\\bphea\\Documents\\input.txt");
	std::string command;
	int value;
	while (OSInfo.is_open() && !OSInfo.eof())
	{
		OSInfo >> command;
		OSInfo >> value;
		if (command == "NCORES")
			setCores(value);
		else if (command == "SLICE")
			setSlice(value);
		else if (command == "NEW")
			// do stuff
			;
		else if (command == "CORE")
			// queue process (value);
			;
		else if (command == "DISK")
			// access disk (value);
			;
		else if (command == "DISPLAY")
			// io to display (value)
			;
		else
			continue;
	}
	OSInfo.close();
}

void OS::setCores(int numCores)
{
	for (int i = 0; i < numCores; i++)
	{
		Core core;
		cores.push_back(core);
	}
}

void OS::setSlice(int sliceTime)
{
	slice = sliceTime;
}

void OS::populateQueue()
{

}
#pragma once
#include <vector>
#include <string>
#include "Core.h"
class OS
{
public:
	OS();
	~OS();

	std::vector<int> processQueue;
	int getOSTime() { return time; }
private:
	int NCores;
	int slice;
	std::vector<Core> cores;
	int time;
	void populateQueue();
	void setCores(int);
	void setSlice(int);
};


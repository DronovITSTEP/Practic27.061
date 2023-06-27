#pragma once
#include <iostream>
class ReadFile
{
private:
	char str[255];
protected:
	FILE* file;
public:
	virtual void Display(const char* path);
	~ReadFile() { fclose(file); }
};


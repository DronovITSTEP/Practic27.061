#pragma once
#include <iostream>
#include <bitset>

#include "ReadFile.h"

class ReadFile_Binary : public ReadFile
{
	char c;
public :
	void Display(const char* path) override;
};


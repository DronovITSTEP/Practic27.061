#pragma once
#include <iostream>
#include "ReadFile.h"

class ReadFile_ASCII : public ReadFile
{
public:
	void Display(const char*) override;
};


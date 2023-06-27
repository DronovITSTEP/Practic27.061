#include "ReadFile_ASCII.h"

void ReadFile_ASCII::Display(const char* path)  {
	if (!fopen_s(&file, path, "r")) {
		while (!feof(file)) {			
			std::cout << fgetc(file) << " ";
		}
	}
}

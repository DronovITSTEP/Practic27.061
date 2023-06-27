#include "ReadFile.h"

void ReadFile::Display(const char* path) {
	if (!fopen_s(&file, path, "r")) {
		while (!feof(file)) {
			//std::cout << fgets(str, 255, file) << std::endl;
			fgets(str, 255, file);
			std::cout << str;
		
		}
	}
}

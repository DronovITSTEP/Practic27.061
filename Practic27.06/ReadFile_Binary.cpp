#include "ReadFile_Binary.h"
/* 01001000 01100101 01101100 1101100 1101111 100000 1010111
1101111 1110010 1101100 1100100 100001 100001 100001 
1101 00001010 1000011 101011 101011 100000 1110100 1101000 1100101 
100000 1100010 1100101 1110011 1110100
*/
void ReadFile_Binary::Display(const char* path) {
	if (!fopen_s(&file, path, "rb")) {
		while (fread(&c, sizeof(char), 1, file)) {
			/*int d = 1, t = 0;
			while (c) {
				t += c % 2 * d;
				c /= 2;
				d *= 10;
			}
			std::cout << t << " ";*/
			/*for (int i = 7; i >= 0; i--) {
				std::cout << ((c >> i) & 1);
			}
			std::cout << " ";*/
			std::cout << std::bitset<8>(c) << " ";
			
		}
	}
}
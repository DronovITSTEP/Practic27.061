#include <iostream>
#include "ReadFile.h"
#include "ReadFile_ASCII.h"
#include "ReadFile_Binary.h"

#include <fstream>
#include <iomanip>
using namespace std;

#define MAX_PATH 260
#define NUM_COLS 18
#define NUM_ROWS 24

int main()
{
	//ReadFile f;
	//ReadFile_ASCII f;
	//ReadFile_Binary f;

	/*ReadFile* f[] = {new ReadFile, new ReadFile_ASCII, new ReadFile_Binary};
	for (int i = 0; i < 3; i++) {
		f[i]->Display("text.txt");
		cout << endl;
	}*/


	char path[MAX_PATH];
	cout << "Input path to file -> ";
	cin.getline(path, MAX_PATH);

	int counter = 0, i = 0, j = 0;

	char text[NUM_COLS];

	ifstream input(path, ios::in | ios::binary);
	if (!input) {
		cout << "Can not open file";
		return -1;
	}

	cout.setf(ios::uppercase);

	while (!input.eof()) {
		for (i = 0; i < NUM_COLS && !input.eof(); i++) {
			input.get(text[i]);
		}
		/*if (i < NUM_COLS) i--;

		for (j = 0; j < i; j++) {
			if ((unsigned)text[j] < 0x10)
				cout << setw(2) << 0 << hex << (unsigned)text[j];
			else
				cout << setw(j) << hex << (unsigned)text[j];
		}

		for (; j < NUM_COLS; j++) cout << "    ";
		cout << "\t";

		for (j = 0; j < i; j++) {
			if (text[j] > 31 && text[j] <= 255) cout << text[j];
			else cout << ".";
		}
			cout << endl;
			if (++counter == NUM_ROWS) {
				counter = 0;
				cout << flush << endl;

			}*/
	}
	input.close();
}

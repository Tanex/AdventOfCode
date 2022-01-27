#include <iostream>
#include "file_reader.h"

int main() {
	FileReader reader;
	std::list<int> ints = reader.readIntegerList("./data/input.txt");
	int prev = -1;
	int numInc = 0;
	for (auto it = ints.begin(); it != ints.end(); it++) {
    	if (prev > -1 && *it > prev) {
			numInc++;
		}
		prev = *it;
 	}
	std::cout << "Value increased " << numInc << " times" << std::endl;
}

#include "file_reader.h"

std::list<int> FileReader::readIntegerList(std::string filename) {
	std::ifstream infile(filename);
	std::string line;
	std::list<int> list;

	while(std::getline(infile, line)) {
		std::istringstream iss(line);
		int i;
		if (!(iss >> i)) {
			throw std::runtime_error("Invalid file formatl");
		}
		list.push_back(i);
	}
	
	return list;
}

#ifndef FILE_READER_H_
#define FILE_READER_H_

#include <string>
#include <sstream>
#include <fstream>
#include <list>

class FileReader {
	public:
		std::list<int> readIntegerList(std::string filename);
};

#endif // FILE_READER_H_

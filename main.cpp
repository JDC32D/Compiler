#include <fstream>
#include <string>
#include "targetGen.h"

int main(int argc, char** argv) {
	std::string fileName;

	if (argc > 1) {
		fileName = argv[1];
		fileName.append(".sp19");
		std::FILE* file = std::fopen(fileName.c_str(),"r");
		if(!file) {
			perror("Could not open file");
		}
		std::string fileout = "file.asm";
		Compile(fileout, file);
		std::fclose(file);
	} else {
		std::string fileout = "out.asm";
		Compile(fileout, stdin);
	}
	return 0;
}
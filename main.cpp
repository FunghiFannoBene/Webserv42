#include <iostream>
#include <stdlib.h>
#include <string.h>

int checkConf(char *filename ,const std::string &filetype)
{
	int filetypeLen;
	int filenameLen;

	filetypeLen = filetype.size();
	filenameLen = strlen(filename);
	return(strncmp(filename + filenameLen - filetypeLen, filetype.c_str(), filetypeLen) == 0);
}

void printExit(const std::string& message)
{
	std::cout << message << std::endl;
	exit(1);
}

int main(int argc, char **argv)
{
	if(argc != 2)
		printExit("The program must take only 1 configuration file.");
	if(checkConf(argv[1], ".conf"))
	{
		//evaluateConfig();
	}
	else
		printExit("Filename must be .conf.");
	
}
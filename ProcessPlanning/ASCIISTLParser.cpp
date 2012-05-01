#include "ASCIISTLParser.h"
#include <string>
#include <fstream>
using namespace std;

namespace ProcessPlanning
{
	ASCIISTLParser::ASCIISTLParser(void)
	{
	}


	ASCIISTLParser::~ASCIISTLParser(void)
	{
	}

	Mesh* ASCIISTLParser::parseFile(void)
	{
		string fn = getFileName(); // STL filename
		return NULL;
	}

	bool ASCIISTLParser::checkSTLFile(void) const
	{
		string fn = getFileName(); // STL filename

		ifstream input;

		input.open(fn.c_str());  // trying to read the file

		if (!input)
		{
			throw "Could not open STL file!";
		}


	}

}


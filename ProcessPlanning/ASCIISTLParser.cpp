#include "ASCIISTLParser.h"
#include "Mesh.h"
#include <string>
#include <fstream>
#include <boost/regex.hpp>
using namespace std;

namespace ProcessPlanning
{
	ASCIISTLParser::ASCIISTLParser(void)
	{
	}


	ASCIISTLParser::~ASCIISTLParser(void)
	{
	}

	Vector* ASCIISTLParser::getNormal(string line)
	{
		regex rNormal("facet normal ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?)");
	
	}

	Point* ASCIISTLParser::getVertex(string line)
	{
		regex rVertex("vertex ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?)");
	}

	Mesh* ASCIISTLParser::parseFile(void)
	{
		string fn = getFileName(); // STL filename
		Mesh* m = new Mesh();

		ifstream input(fn.c_str());
		string line;

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

		// TODO: Better checking

		input.close();
	}

}


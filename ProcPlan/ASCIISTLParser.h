#pragma once

#include <string>
#include "stdafx.h"
using namespace std;


namespace ProcessPlanning
{

	class ASCIISTLParser :
		public STLParser
	{
	private:
		bool checkSTLFile(void) const;
		Vector* getNormal(string line);
		Point* getVertex(string line);
	public:
		ASCIISTLParser(void);
		~ASCIISTLParser(void);
		Mesh* parseFile(void);
	};

}

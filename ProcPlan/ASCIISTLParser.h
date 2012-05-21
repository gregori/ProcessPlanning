#pragma once
#include "STLParser.h"
//#include "Point.h"
//#include "Vector.h"
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
		//Vector* getNormal(string line);
		//Point* getVertex(string line);
	public:
		ASCIISTLParser(void);
		~ASCIISTLParser(void);
//		Mesh* parseFile(void);
	};

}

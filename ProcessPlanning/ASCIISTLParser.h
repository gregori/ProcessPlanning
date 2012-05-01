#pragma once
#include "STLParser.h"

namespace ProcessPlanning
{

	class ASCIISTLParser :
		public STLParser
	{
	private:
		bool checkSTLFile(void) const;
	public:
		ASCIISTLParser(void);
		~ASCIISTLParser(void);
		Mesh* parseFile(void);
	};

}

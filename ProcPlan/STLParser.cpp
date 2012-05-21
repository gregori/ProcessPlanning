#include "stdafx.h"

namespace ProcessPlanning
{

	STLParser::STLParser(string fn)
	{
		fileName = fn;
	}


	STLParser::~STLParser(void)
	{
	}

	//void STLParser::run(void)
	//{
	//	//parseFile();
	//}

	string STLParser::getFileName(void) const
	{
		return fileName;
	}

	//void setSTLMesh(Mesh* m)
	//{
	//	stlMesh = m;
	//}

	//Mesh* getSTLMesh(void) const
	//{
	//	return stlMesh;
	//}
}
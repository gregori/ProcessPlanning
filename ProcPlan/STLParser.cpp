#include "stdafx.h"
#include "STLParser.h"

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
	void STLParser::setFileName(string f)
	{
		fileName = f;
	}

	string STLParser::getFileName(void) const
	{
		return fileName;
	}

	void STLParser::setSTLMesh(Mesh* m)
	{
		stlMesh = m;
	}

	Mesh* STLParser::getSTLMesh(void) const
	{
		return stlMesh;
	}
}
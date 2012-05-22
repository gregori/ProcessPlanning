#include "stdafx.h"
#include "ProcessController.h"
#include <string>

using namespace std;

namespace ProcessPlanning
{
	ProcessController::ProcessController(void)
	{
		mesh = NULL;
		solid = NULL;
		stlParser = NULL;
	}

	ProcessController::~ProcessController(void)
	{
		mesh = NULL;
		solid = NULL;
		stlParser = NULL;
	}

	void ProcessController::setSTLParser(STLParser *sp)
	{
		stlParser = sp;
	}

	void ProcessController::parseSTLFromFile(string fileName)
	{
		setSTLParser(static_cast<STLParser*>(new ASCIISTLParser));
		stlParser->setFileName(fileName);
		mesh = stlParser->parseFile();
	}

	Mesh* ProcessController::getMesh(void) const
	{
		return mesh;
	}
}
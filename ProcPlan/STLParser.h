#pragma once
#include "stdafx.h"

#include <string>

using namespace std;


namespace ProcessPlanning
{

	class STLParser //:
		//public Thread
	{
	private:
		string fileName;
		Mesh* stlMesh;
		
		//methods
		virtual bool checkSTLFile(void) { return false; };
		//void run();
	public:
		STLParser(const string fn="");
		virtual ~STLParser(void);
		virtual Mesh* parseFile(void) { return NULL; }
		void setFileName(string f);
		string getFileName(void) const;
		void setSTLMesh(Mesh* m);
		Mesh* getSTLMesh(void) const;
	};


}

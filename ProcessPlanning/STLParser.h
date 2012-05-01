#pragma once
#include "Thread.h"
#include "Mesh.h"
#include <string>
using namespace std;

namespace ProcessPlanning
{

	class STLParser :
		public Thread
	{
	private:
		string fileName;
		
		//methods
		virtual bool checkSTLFile(void)=0;
		void run();
	public:
		STLParser(const string fn="");
		virtual ~STLParser(void);
		virtual Mesh* parseFile(void)=0;
		string getFileName(void) const;
	};


}

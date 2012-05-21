#include "stdafx.h"

#include <boost/algorithm/string.hpp>
#include <fstream>
#include <boost/regex.hpp>
#include "PointFactory.h"

using namespace std;
using namespace boost;

namespace ProcessPlanning
{
	ASCIISTLParser::ASCIISTLParser(void)
	{
	}


	ASCIISTLParser::~ASCIISTLParser(void)
	{
	}

	Vector* ASCIISTLParser::getNormal(std::string line)
	{
		regex rNormal("facet normal ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?)");
        //boost::match_results<std::string::const_iterator> content;
		cmatch content;
        Vector* v;

        if (regex_match(line.c_str(), content, rNormal))
        {
			v = new Vector(atof(content[1].str().c_str()), atof(content[3].str().c_str()), atof(content[5].str().c_str()));
		}
        return v;
	}

	Point* ASCIISTLParser::getVertex(std::string line)
	{
		regex rVertex("vertex ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?)");
        //boost::match_results<std::string::const_iterator> content;
		cmatch content;
        Point* p;

		if (regex_match(line.c_str(), content, rVertex))
        {   // TODO: need to use the PointFactory
			p = PointFactory.getPoint(atof(content[1].str().c_str()), atof(content[3].str().c_str()), atof(content[5].str().c_str()));
			p->setInterface(new Graphics(static_cast<GraphicsImp*>(new OpenGLImp)));
		}
        return p;
	}

	Mesh* ASCIISTLParser::parseFile(void)
	{
		std::string fn = getFileName(); // STL filename
		std::string line;
        Triangle* t;
		Mesh* m = new Mesh();
		m->setInterface(new Graphics(static_cast<GraphicsImp*>(new OpenGLImp)));

		ifstream input(fn.c_str());
        while (getline(input, line))
        {
            trim(line);
			if (find_first(line, "endfacet"))
			{
				// Does nothing
			}
            else if (find_first(line, "facet")) // we have the normal vector data
            {
                t = new Triangle();
				t->setInterface(new Graphics(static_cast<GraphicsImp*>(new OpenGLImp)));
                t->setVector(getNormal(line));
            }
            else if (find_first(line, "vertex")) // we have vertex data
            {
                t->addVertex(getVertex(line));
            }
            else if (find_first(line, "endloop"))
            {
                m->addGeometry(t);
                t = NULL;
            }
        }

		return m;
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

		return true;
	}

}

